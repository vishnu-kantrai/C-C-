/*Code to print a number pyramid shape*/

#include <iostream>
using namespace std;

int main() 
{
    
  int rows;
  cout << "Enter number of rows: ";
  cin >> rows;
  
  for (int j = 1; j < rows; j++) 
    { 
        for (int i = j; i < rows; i++)
         cout << " ";
        for (int k = 0; k < (2 * j - 1); k++)
            cout << k;
        cout << endl;
    }

  cin.ignore();
  cin.get();
    return 0;
}
