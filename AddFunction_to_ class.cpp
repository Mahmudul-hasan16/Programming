#include<bits/stdc++.h>
using namespace std;

class Student
{
    public :

        int id;
        double gpa;

        void display()
        {
            cout << "ID = " <<id << "  "  << "GPA = " <<gpa <<endl;
        }

        void setValue(int  x , double  y)
        {
            id  =  x;
            gpa  =  y;
        }

};

int main()
{

    Student Hasan,Bijoy;

    Hasan.setValue(102781,3.85);
    Hasan.display();


    Bijoy.setValue(102782,3.75);
    Bijoy.display();





   return 0;
}


