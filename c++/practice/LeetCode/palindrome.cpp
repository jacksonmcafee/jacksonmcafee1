#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
      string backward = "";
      string forward = to_string(x);
      int length = forward.length();
      for(int i = length; i > -1; i--) {
        cout << forward[i] << endl;
        backward.append(to_string(forward[i]));
      }
      cout << forward << endl;
      cout << backward << endl;
    }
};

int main() {
  int pass;
  cin >> pass;
  Solution sol;
  bool success = sol.isPalindrome(pass);
  if (success) {
    cout << "true" << endl;
  }
  else {
    cout << "false" << endl;
  }
}
