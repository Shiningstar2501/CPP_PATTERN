#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int row = 0; row < n; row++) {
    // star
    for (int col1 = 0; col1 < n - row - 1; col1++) {
      cout << "* ";
    }
    // spaces
    for (int col2 = 0; col2 < 2 * row + 1; col2++) {

      cout << "  ";
    }
    // star
    for (int col3 = 0; col3 < n - row - 1; col3++) {
      cout << "* ";
    }
    cout << endl;
  }

  for (int row2 = 0; row2 < n; row2++) {
    // star
    for (int col4 = 0; col4 < row2; col4++) {
      cout << "* ";
    }
    // spaces
    for (int col5 = 0; col5 < 2 * n - 1 - 2 * row2; col5++) {
      // cout << "* ";
      cout << "  ";
    }
    // star
    for (int col = 0; col < row2; col++) {
      cout << "* ";
    }
    cout << endl;
  }
}
