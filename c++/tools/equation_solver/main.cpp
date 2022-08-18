#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>

struct Settings {
    std::string equation, variable = "x";
    bool graph = false;
};

int solution(Settings &s);

int main(int argc, char **argv) {

    Settings s;

    // based on argc, determine what info is passed
    if (argc < 2) {
        std::cerr << "No arguments passed, provide an equation." << std::endl;
        return 0;
    }

    for (int i = 0; i < argc; i++) {
        if (argv[i][0] == '-') {
            if (argv[i][1] == 'v') {
              s.variable = argv[i+1];
            }
            if (argv[i][1] == 'g') {
              s.graph = true;
            }
            if (argv[i][1] == '-') {
              if (argv[i][2] == 'v') {
                s.variable = argv[i+1];
              }
              if (argv[i][2] == 'g') {
                s.graph = true;
              }
            }
        }
    }

    s.equation = argv[argc-1];

    // parse white space from s.equation
    s.equation.erase(std::remove_if(s.equation.begin(), s.equation.end(), ::isspace), s.equation.end());

    // solve here
    std::cout << s.variable << " = " << solution(s) << std::endl;

    return 0;
}

int solution(Settings &s) {
    // make copy of s.equation
    std::string temp = s.equation;

    // solve




    return 0;
}
