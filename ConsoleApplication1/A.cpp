#include "A.h"

void A::print()
{
	cout << "My value is " << value << endl;
}

A A::operator+(const A& obj)
{
    
    // creating temporary object to return
    A aTemp(0);

    // add 'value' of a object given in argments, to current A.value.
    aTemp.value = value + obj.value;
    return aTemp;
}

A A::operator++(int)
{
    // created int tempVal after A(value+1) caused the initial object to increment.
    int tempVal = value + 1;
    return A(tempVal);
}

A A::add(A a1, A a2)
{
    return A(a1.get_value() + a2.get_value());
}

int A::get_value()
{
    return value;
}
