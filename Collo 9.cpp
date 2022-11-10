#include <iostream>
using namespace std;

int main() {
    // This array can store upto 18 elements (2x3x3)
    int a[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };
    
    // Displaying the number of matrix. 
  for (int i = 0; i < 2; ++i) {
//Displaying  the rows.
  for (int j = 0; j < 3; ++j) {
//Displaying  the columns. 
  for (int k = 0; k < 3; ++k) {
  cout << "a[" << i << "][" << j << "][" << k << "] = " << a[i][j][k] << endl;
  }
  }
  }
    
    return 0;
}