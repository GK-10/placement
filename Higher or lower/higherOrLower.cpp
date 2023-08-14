#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter you guess, the number is within 10 \n";
    cin>>n;
    int guess = 0;
    srand(time(0));
    int ton = rand() % 10;
    int tries = 1;
    do
    {
        if (n == ton)
        {
            cout<<"You found the number."<<endl;
            break;
        }
        else if (n > ton)
        {
            cout<<"Your number is greater."<<endl;
        }else if (n < ton)
        {
            cout<<"Your number is less."<<endl;
        }        
        
        cout<<"Enter your next guess"<<endl;
        cin>>n;
        tries++;

    }while(guess == 0);
    
}