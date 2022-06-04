#include<bits/stdc++.h>
using namespace std;



int main()
{
    while(1)
    {

    int guessNumber, randomNumber;
    cout<< "Enter Ur Guessing Number between (1-5):      ";
    cin>>guessNumber;
    cout<< endl << endl;

    for(int i=1; i<=5; i++)
    {
        randomNumber =1+ rand()%5 ;
    }
        if(guessNumber==randomNumber)
        {
            cout<< "====Congratulations====" <<endl << "Ur guess is Right" <<endl << endl;
        }

        else
        {
            cout<< "Ur guess is Wrong------>  "  << "Try Again please.....!" <<endl <<endl;
            cout << "Random Number was  : " <<randomNumber <<endl <<endl;

        }

    }
    return 0;
}
