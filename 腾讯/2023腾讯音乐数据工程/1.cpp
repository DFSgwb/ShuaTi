/*
计算一元二次方程ax^2+bx+c=0;
*/
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    double a, b, c;
    while (cin >> a >> b >> c)
    {

        if (a == 0)
        {
            cout << "Not quadratic equation";
            // return;
        }

        if (a != 0 && b * b == 4 * a * c)
        {
            double x1;
            x1 = -b / (2 * a);
            if (x1 == -0.0)
                x1 = 0;
            cout << setiosflags(ios::fixed);
            cout.precision(2);
            cout << "x1=x2=" << x1 << endl;
        }
        if (a != 0 && b * b > 4 * a * c)
        {
            double x1, x2;
            double x = b * b - 4 * a * c;
            x1 = (-b - sqrt(x)) / (2 * a);
            x2 = (-b + sqrt(x)) / (2 * a);
            cout << setiosflags(ios::fixed);
            cout.precision(2);
            cout << "x1=" << x1 << ";"
                 << "x2=" << x2 << endl;
        }
        if (a != 0 && b * b < 4 * a * c)
        {
            double x1, x2, x11;
            double x = 4 * a * c - b * b;
            double x3;
            x3 = sqrt(x) / (2 * a);
            x11 = -b / (2 * a);
            cout << setiosflags(ios::fixed);
            cout.precision(2);
            cout << "x1=" << x11 << "-" << x3 << "i"
                 << ";"
                 << "x2=" << x11 << "+" << x3 << "i" << endl;
        }
    }
    return 0;
}