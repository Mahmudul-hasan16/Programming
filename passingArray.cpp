#include<bits/stdc++.h>

using namespace std;

void displayArray( int num[], int arraySize)
{
    for (int i =0; i<arraySize ; i++)
    {
        cout <<num[i] << "  ";
    }
}

int main()
{
    int num[5] = {10,20,30,40,50};
    displayArray(num ,5);

    return 0;
}
