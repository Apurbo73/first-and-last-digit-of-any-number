#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, sum = 0, rem = 0, i = 0, last = 0, first = 0;
    cin >> a;
    last = a;
    while (a >= 10)
    {
        a = a / 10;
    }
    cout << "First Digit is " << a << endl;
    cout << "Last Digit is " << last % 10 << endl;
}