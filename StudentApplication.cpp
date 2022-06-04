#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n , sum = 0;
    cout<<"Enter Number of Students : ";
    cin>>n;

    int students[n];

    //Getting input here.
    for(int i=0 ; i<n; i++)
    {
        cout << "Marks for student : " <<i+1 << "  =  ";
        cin>> students[i];
        sum = sum+students[i];
    }

    cout<< "Total marks : " <<sum <<endl;

    float avarage = (float) sum/ n;
    cout<< "Average mark : " << avarage <<endl ;

    //Maximum and minimum find out
    int max = students[0];
    int min = students[0];

    for (int i= 1; i<n ; i++)
    {
        if (max < students[i])
        {
            max = students[i];
        }

        if (min> students[i])
        {
            min = students[i];
        }
    }

    cout <<"Maximum Number is :" <<max <<endl;
    cout <<"Minimum Number is :"  <<min <<endl;


    return 0;
}
