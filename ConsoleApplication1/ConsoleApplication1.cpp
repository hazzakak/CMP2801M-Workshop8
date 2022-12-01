// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "A.h"
using namespace std;

int main()
{
    // Initialise the A object.
    A a1 = A(2);
    A a2 = A(3);
    A a3 = A(5);

    a1.print();// "My value is 2"
    a2.print();// "My value is 3"
    a3.print();// "My value is 5"

    A a4 = a1+a2+a3; // adds 2+3+5 == 10
    A a5 = ++a4; // incrememnts a4
    a4.print(); // "My value is 10"
    a5.print(); // "My value is 11"

    return 0;
}