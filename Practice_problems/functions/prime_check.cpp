/*This program chrck if yser input number is prime
or not using boolean type function */

#include <iostream>
using namespace std;

bool isPrime(int n) 
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() 
{
    int num;
  
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << num << " is a Prime number" << endl;
    else
        cout << num << " is NOT a Prime number" << endl;

    cin.ignore();
    cin.get();
    return 0;
}
