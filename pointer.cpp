#include<bits/stdc++.h>
using namespace std;

int main()

{
    // Here just show the basic of pointer and how to do it and work perfectly.

    /*int x = 4;

    int *p;
    p = &x;

    cout << x <<endl;
    cout << &x <<endl;
    cout << p <<endl;
    cout << *p <<endl;

    */

   // Summation of two number by pointer
    int number1 = 10;
    int number2  = 20;

    int *pointer1 = &number1;
    int *pointer2 = &number2;

    int sum = *pointer1 + *pointer2;

    cout << "Summation of two number : " << sum << endl;


    return 0;
}
