// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class A {
private:
    int value;
public:
    // used a getter, as it's the only way to access a private variable from outside the class.
    // add() was declared outside of A so value needed to be public.
    int get_value() { return value; }
    
    A(int v) : value(v) {}
    void print() { cout << "My value is " << value << endl; }

    // overloads + to add a.values to each other to return another A object,
    A operator + (const A& obj) {
        // creating temporary object to return
        A aTemp(0);

        // add 'value' of a object given in argments, to current A.value.
        aTemp.value = value + obj.value;
        return aTemp;
    }

    // overloads ++ to increment the value parameter.
    A operator ++ (int) { 
        // created int tempVal after A(value+1) caused the initial object to increment.
        int tempVal = value + 1;
        return A(tempVal);
    }
};


// Task 3, create a method to add two user-defined classes.
A add(A a1, A a2) { 
    return A(a1.get_value() + a2.get_value());
}

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
