#pragma once
#include <iostream>
using namespace std;

class A
{
private:
    int value;
public:
    // used a getter, as it's the only way to access a private variable from outside the class.
    // add() was declared outside of A so value needed to be public.
    int get_value();

    A(int v) : value(v) {}
    void print();

    // overloads + to add a.values to each other to return another A object,
    A operator + (const A& obj);

    // overloads ++ to increment the value parameter.
    A operator ++ ();

    // Task 3, create a method to add two user-defined classes.
    A add(A a1, A a2);
};

