#include<bits/stdc++.h>
using namespace std;


//This all are not return type cause when we write the main function first then we need to write the function type in in the first .
/*
void Add(int ,int );
void substract (int ,int );
void multiple(int,int );
void division(int,int );
*/

    void Add(int a ,int b)
    {
        int sum = a+b;
        cout <<"Summation : " <<sum << endl << endl;
        cout<< "--->NEST!" << endl << endl;
    }

    void substract (int x,int y)
    {
        int sub = x-y;
        cout << "Substraction : " <<sub <<endl<< endl;
        cout<< "--->NEST!" << endl << endl;
    }

    void multiple(int a, int b)
    {
        int mul = a*b;
        cout<< "Multiplicaton : " <<mul << endl<< endl;
        cout<< "--->NEST!" << endl << endl;
    }

    void division(int a,int b)
    {
        int div = a/b;
        cout<< "Division : "<< div <<endl<< endl;
        cout<< "--->NEST!" << endl << endl;
    }


    /*
    int main()
    {
        Add(10,20);
        substract(100,10);
        multiple(10,10);
        division(100,10);

    return 0;
    }

    */

    //Value return in function

    int Addition (int a ,int b)
    {
        int sum= a+b;
        return sum;
    }

    double Bijoy(double a,double b)
    {
        double x = a+b;
        return x;
    }

    //Default values in parameter that means it need to main function in the last for using it better.
    void display(int a= 100,int b=100)
    {
        cout << a << "  " <<b <<endl;
    }

    //Advantage  of parameter
    void square (int n)
    {
        int result = n*n;
        cout<< "Square of "<<n << " = " <<result<<endl;
    }


    int main()
    {
        Add(10,20);
        substract(100,10);
        multiple(10,10);
        division(100,10);



        int f_result = Addition(100,200);
        cout<< "Return value is : " <<f_result <<endl;

        double f_x = Bijoy(12.4,17.4);
        cout << "Double value is  : " <<f_x << endl;

        //Default value in parameters
        display();
        display(10);

        square(5);
        square(6);
        square(7);


        return 0;
    }
