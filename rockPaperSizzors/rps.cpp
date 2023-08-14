#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int mine, Computer, end = 0;
    cout<<"Welcome to the game of rock, paper and sizzors."<<endl;
        cout<<"To select rock enter 0."<<endl;
        cout<<"To select paper enter 1."<<endl;
        cout<<"To select sizzor enter 2."<<endl;
        cin>>mine;
    do
    {
        srand(time(0));
        Computer = rand()%3;
        switch (mine)
        {
        case 0:
            if (Computer == 0)
            {
                end = 0;
                cout<<"Both of you chose rock, try again"<<endl;
            }else if (Computer == 1)
            {
                end = 1;
                cout<<"OOPS!!, the computer chose paper, you lost"<<endl;
            }else if (Computer == 2)
            {
                end = 1;
                cout<<"CONGRATULATIONS, the computer chose sizzors, you WON"<<endl;
            } 
                        
            break;
        case 1:
            if (Computer == 0)
            {
                end = 1;
                cout<<"CONGRATULATIONS, the computer chose rock, you WON"<<endl;
            }else if (Computer == 1)
            {
                end = 0;
                cout<<"Both of you chose paper, try again"<<endl;
            }else if (Computer == 2)
            {
                end = 1;
                cout<<"OOPS!!, the computer chose sizzors, you lost"<<endl;
            } 

            break;
        case 2:
            if (Computer == 0)
            {
                end = 1;
                cout<<"OOPS!!, the computer chose rock, you lost"<<endl;
            }else if (Computer == 1)
            {
                end = 1;
                cout<<"CONGRATULATIONS, the computer chose paper, you WON"<<endl;
            }else if (Computer == 2)
            {
                end = 2;
                cout<<"Both of you chose paper, try again"<<endl;
            } 
        default:
            cout<<"Enter valid input"<<endl;
            break;
        }
        if (mine == 0 && Computer == 2)
        {
            cout<<"You chose rock and computer chose sizzor, congo on the win"<<endl;
            end = 1;
        }
        cout<<"To select rock enter 0."<<endl;
        cout<<"To select paper enter 1."<<endl;
        cout<<"To select sizzor enter 2."<<endl;
        cin>>mine;
        
    } while (end == 1);
    
    
}