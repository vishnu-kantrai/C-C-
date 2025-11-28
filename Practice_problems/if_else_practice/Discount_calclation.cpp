#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

float amount = 0.0f;
int discount = 0;

void basic_dst(int a)
{
  cout << "\nBasic: " << a << "%" << endl;
  discount += a;
}

void mem_dst(int b)
{
  cout << "Membership: " << b << "%" << endl;
  discount += b;
}

void extra_dst(int c)
{
  cout << "Extra: " << c << "%" << endl;
  discount += c;
}

string to_lower(string s) {
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  return s;
}

int main()
{
  string membership, pay;
  cout << "Amount: ";
  if (!(cin >> amount)) {
    cerr << "Invalid amount\n";
    return 1;
  }

  cout << "\nMembership: [Basic/Silver/Gold] ";
  cin >> membership;
  membership = to_lower(membership);

  cout << "\nPay Option: [Cash/Card/UPI] ";
  cin >> pay;
  pay = to_lower(pay);

  cout << endl << endl;
  cout << "DISCOUNT(S)!!" << endl;

  if (amount > 1000.0f && amount < 2000.0f)
    basic_dst(5);
  else if (amount >= 2000.0f)
    basic_dst(10);
  else
    basic_dst(3);

  if (membership == "basic" || membership == "none")
    mem_dst(0);
  else if (membership == "silver")
    mem_dst(3);
  else if (membership == "gold")
    mem_dst(5);
  else
    mem_dst(0);

  
  if (pay == "cash")
    extra_dst(1);
  else if (pay == "card")
    extra_dst(3);
  else if (pay == "upi")
    extra_dst(5);
  else
    extra_dst(0);

  if (discount > 100) discount = 100;
  cout << "Total: " << discount << "%" << endl;
  cout << "\n\nFinal Amount: " << amount - (amount * discount / 100.0f) << endl;

  
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cout << "\nPress Enter to exit...";
  cin.get();
  return 0;
}
