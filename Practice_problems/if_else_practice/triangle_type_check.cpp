/*A program to check the type of triangle whose side are provided by the user.*/

#include <iostream>
using namespace std;

int main()
{
    int side_1,side_2,side_3;

    cout << "Enter side lengths: ";
    cin >> side_1 >> side_2 >> side_3;

    if (side_1 + side_2 > side_3 && side_2 + side_3 > side_1 && side_1 + side_3 > side_2)
    {
        if (side_1 == side_2 && side_2 == side_3)
            cout << "It is an Equilateral Triangle" << endl;
        else if (side_1 == side_2 || side_2 == side_3 || side_1 == side_3)
            cout << "It is an Isosceles Triangle" << endl;
        else
            cout << "It is a Scalene Triangle" << endl;
    }
    else
    {
        cout << "The given sides do not form a valid triangle" << endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}
