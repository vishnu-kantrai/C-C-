/*This program takes Starting, Terminating and common difference inputs for a Arithmetic propogation from user and prints out the Sum of given AP.*/

#include<iostream>
using namespace std;
int main()
{
  int start, common_diff,target, terms, sum = 0;
  cout << "Enter Starting number: " << endl;
  cin >> start;
  cout << "Enter Common difference: " << endl;
  cin >> common_diff;
  cout << "Enter Terminating number: " <<endl;
  cin >> target;

  terms = ((target-start)/common_diff)+1;

  for(int i=0; i<terms; i++)
    sum += (start + i*common_diff);

  cout << "\nSum of AP: "<< sum << endl;
  cin.ignore();
  cin.get();
  return 0;
}
