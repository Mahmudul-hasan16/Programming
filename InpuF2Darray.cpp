#include<bits/stdc++.h>

using namespace std;

int main()

{
    /*int A [2] [5] = {
                             {10,20,30,70,80},
                             {40,50,60,90,100}


                        };
    cout << A[1][0];
    cout<<endl;
 */

int A [2] [5];

cout<<"Enter Input 2D Array: "<<endl;

for (int row=0;row<2;row++)
   {
       for (int col=0;col<5;col++)
       {
           cin >> A[row] [col] ;
       }

   }


cout << "-------------------" <<endl;

cout<< "The 2D Array are: " <<endl;

for (int row=0;row<2;row++)
   {
       for (int col=0;col<5;col++)
       {
           cout << A[row] [col] <<"  ";
       }
       cout <<endl;

   }

        return 0;
}
