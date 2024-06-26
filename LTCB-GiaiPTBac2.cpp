// LTCB-GiaiPTBac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, x1, x2, delta;
    cout << "Nhap he so a:"; cin >> a;
    cout << "Nhap he so b:"; cin >> b;
    cout << "Nhap he so c:"; cin >> c;
    if (a == 0)
    {
        if (b == 0) {
            if (c != 0)
            {
                cout << "Phuong trinh vo nghiem";
            }
            else
            {
                cout << "Phuong trinh co vo so nghiem";
            }
        }
        else
        {
            x1 = x2 = -c / b;
            cout << "Phuong trinh co nghiem x = " << x1;
        }
    }
    else
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            cout << "Phuong trinh vo nghiem";
        }
        else if (delta == 0)
        {
            x1 = x2 = -b / (2 * a);
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << x1;
        }
        else
        {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet";
            cout << "\nx1 =" << x1;
            cout << "\nx2 =" << x2;
        }
    } return 0;
} 


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
