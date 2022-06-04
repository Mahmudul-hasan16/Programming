#include<bits/stdc++.h>
using namespace std;

class student
{
    public :

        int student_id;
        double student_gpa;

};



int main()
{
    student Hasan;
    student Rumi;

    Hasan.student_id = 102781;
    Hasan.student_gpa = 3.85;

    cout << "Hasan's Id = " << Hasan.student_id << "  "  << "Gpa = " << Hasan.student_gpa <<endl <<endl;

    Rumi.student_id = 102782;
    Rumi.student_gpa = 3.75;

    cout << "Rumi's Id = " << Rumi.student_id << "  "  << "Gpa = " << Rumi.student_gpa <<endl;


    return 0;
}

