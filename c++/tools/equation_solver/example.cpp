// These are the headers we'll be using in this post
#include <functional>
#include <iostream>
#include <optional>
#include <stdexcept>
#include <string>
#include <unordered_map>

// For example code only; only heathens do this in real life
using namespace std;

struct MySettings {
  bool help {false};
  bool verbose {false};
  optional<string> infile;
  optional<string> outfile;
  optional<int> value;
};

typedef function<void(MySettings&)> NoArgHandle;

#define S(str, f, v) {str, [](MySettings& s) {s.f = v;}}
const unordered_map<string, NoArgHandle> NoArgs {
  S("--help", help, true),
  S("-h", help, true),

  S("--verbose", verbose, true),
  S("-v", verbose, true),

  S("--quiet", verbose, false),
};
#undef S

typedef function<void(MySettings&, const string&)> OneArgHandle;

#define S(str, f, v) \
  {str, [](MySettings& s, const string& arg) { s.f = v; }}

const unordered_map<string, OneArgHandle> OneArgs {
  // Writing out the whole lambda
  {"-o", [](MySettings& s, const string& arg) {
    s.outfile = arg;
  }},

  // Using the macro
  S("--output", outfile, arg),

  // Performing string -> int conversion
  S("--value", value, stoi(arg)),
};
#undef S

MySettings parse_settings(int argc, const char* argv[]) {
  MySettings settings;

  // argv[0] is traditionally the program name, so start at 1
  for(int i {1}; i < argc; i++) {
    string opt {argv[i]};

    // Is this a NoArg?
    if(auto j {NoArgs.find(opt)}; j != NoArgs.end())
      j->second(settings); // Yes, handle it!

    // No, how about a OneArg?
    else if(auto k {OneArgs.find(opt)}; k != OneArgs.end())
      // Yes, do we have a parameter?
      if(++i < argc)
        // Yes, handle it!
        k->second(settings, {argv[i]});
      else
        // No, and we cannot continue, throw an error
        throw std::runtime_error {"missing param after " + opt};

    // No, has infile been set yet?
    else if(!settings.infile)
      // No, use this as the input file
      settings.infile = argv[i];

    // Yes, possibly throw here, or just print an error
    else
      cerr << "unrecognized command-line option " << opt << endl;
  }

  return settings;
}
