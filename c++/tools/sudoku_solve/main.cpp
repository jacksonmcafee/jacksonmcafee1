#include <iostream>
using namespace std;

void showBoard(int board[9][9]);
void populateBoard(int board[9][9]);
bool boardIsLegal(int board[9][9]);
void solveBoard(int board[9][9]);

int main() {
  // initialize 2D array "board"
  int solve_board[9][9];

  /* TO DO void menu(); */

  // allow user to populate board with data
  while(boardIsLegal() != true) {
    populateBoard(solve_board);
  }

  /* TO DO void solveBoard(); */

  return 0;
}

// displays board information
void showBoard(int board[9][9]) {
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

// allows user to input board information
void populateBoard(int board[9][9]) {
  for(int i = 0; i < 9; i++) {
    for(int j = 0; j < 9; j++) {
      solve_board[i][j] = 0;
    }
  }
  cout << "Input each row 9 characters at a time." << endl;
  cout << "When you reach a blank space, input a zero instead." << endl;
  for(int i = 0; i < 9; ++i) {
    for(int j = 0; j < 9; ++j) {
        int temp;
        BAD:
        cin >> temp;
        if(temp < 0 || temp > 9) {
          cout << "Invalid option at index " << j + 1 << endl;
          cout << "Input a new value." << endl;
          goto BAD;
        }
        board[i][j] = temp;
    }
  }
}

// checks if board provided is valid
bool boardIsLegal(int board[9][9]) {

// check if row is legal
  for (int i = 0; i < 9; i++) {

    }
  }
