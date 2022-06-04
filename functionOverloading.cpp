#include<bits/stdc++.h>
using namespace std;

int  sum(int a,int b)
{
    int sum =a+b;
    cout << "Total Sum =  " <<sum <<endl;
}

int sum(int x,int y,int z)
{
    int sum = x+y+z;
    cout << "Total Sum =  " <<sum <<endl; -
}

int main()
{
    sum(10,40);
    sum(10,40,50);

    return 0;
}
