#include <iostream>
using namespace std;

int main() {
  int r1, c1, r2, c2;
  cout << "enter rows and columns for array1: ";
  cin >> r1;
  cin >> c1;
  cout << "enter rows and columns for array2: ";
  cin >> r2;
  cin >> c2;
  int arr[r1][c1];
  int arr1[r2][c2];

  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cout << "enter element  for array 1" << ":" << endl;
      cin >> arr[i][j];
    }
  }

  for (int i = 0; i < r2; i++) {
    for (int j = 0; j < c2; j++) {
      cout << "enter element for array 2 " << ":" << endl;
      cin >> arr1[i][j];
    }
  }

  if (c1 == r2) {
    
    int res[r1][c2];

    
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
        
        int sum = 0;

        
        for (int k = 0; k < c1; k++) {
          sum += arr[i][k] * arr1[k][j];
        }

        
        res[i][j] = sum;
      }
    }

    
    for (int i = 0; i < r1; i++) {
      for (int j = 0; j < c2; j++) {
        cout << res[i][j] << " ";
      }
      cout << endl;
    }
  } else {
    cout << "error";
  }

  return 0;
}
