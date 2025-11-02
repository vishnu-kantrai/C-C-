/*A program to check if the provided number is
a Palindrome or not*/
#include<iostream>
using namespace std;

long reverse(long o, long r);

int main()
{
  long original_num, rev_num;
  cout << "Enter a Number: " << endl;
  cin >> original_num;

  rev_num = reverse(original_num, 0);

  if(rev_num == original_num)
    cout << "Number is a Palindrome" << endl;
  else
    cout << "Number is not a Palindrome" << endl;
 
  cin.ignore();
  cin.get();
  return 0;
}

long reverse(long o, long r)
{
  r += o%10;
  o /= 10;
  if(o == 0)
    return r;
  else
    r *= 10;
    return reverse( o, r);
}
