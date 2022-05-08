#include <iostream>
#include <random>
#include <chrono>
#include <string>
#include <thread>
#include <algorithm>

using namespace std;

string random_string(int max);

int main() {
  int max;
  cout << "Input your desired key length: " << endl;
  cin >> max;

  srand(time(NULL));
  for(int i = 0; i < 1000; i++) {
    cout << i+1 << ". " << random_string(max) << endl;
    std::this_thread::sleep_for(300ms);
    }
  return 0;
}

string random_string(int max)
{
     string str("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%&+=./?");

     std::random_device rd;
     std::mt19937 generator(rd());

     std::shuffle(str.begin(), str.end(), generator);

     return str.substr(0, max);    // assumes 32 < number of characters in str
}
