// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "A.h"
using namespace std;

int main()
{
    A a1 = A(2);
    A a2 = A(3);
    A a3 = A(5);

    a1.print();
    a2.print();
    a3.print();

    A a4 = a1+a2+a3;
    A a5 = a4++;
    a4.print(); // "My value is 10"
    a5.print(); // "My value is 11"

    return 0;
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
