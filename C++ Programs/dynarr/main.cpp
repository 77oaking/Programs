#include <iostream>
#include "dynarr.h"
using namespace std;

int main()
{
    cout << "\Without Argument:\n";
    dynArr wA;
    cout << "With Argument:\n";
    dynArr withA(5);
    cout << "Enter 5 values:\n";
    int x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
       withA.setValue(i, x);
    }
    cout << "Enter new size:\n";
    int s;
    cin >> s;
    .allocate(s);
    cout << "Show size difference by adding data\n";
    for (int i = 0; i < s; i++)
        cout << withA.getValue(i) << " ";
    cout << "\nDone!\n";
    cout << endl;
}
