/*Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
Input format :
Integer N (Total no. of rows)*/
#include <iostream>
using namespace std;

int main() {
  int N, i = 1, j;
  char ch;
  cin >> N;
  while (i <= N) {
    j = 1;
    while (j <= i) {
      ch = 'A' + i + j - 2;
      cout << ch;
      j++;
    }
    cout << endl;
    i++;
  }
}
