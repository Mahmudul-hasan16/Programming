#include<bits/stdc++.h>
using namespace std;

int main()
{
    int values[5];

    cout<<"Data Input for Normal Datatype: ";
    cin>>values[0] ;
    cin>>values[1] ;
    cin>>values[2] ;
    cin>>values[3] ;
    cin>>values[4] ;

    cout << values [0] << " "<< values [1] << " "<< values [2] << " "<< values [3] << " "<< values [4] << " " <<endl;




    int marks[5];

    cout<< "Input data for Array :  ";

    for (int i=0; i<=4; i++)
    {
        cin >> marks[i] ;
    }

    for(int i=0;i<=4;i++)
    {
        cout<< marks[i] << "  ";
    }

    return 0;
}
