#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    int guessed,attempts=0;
    int secretnum = rand()%100;
    
        cout<<"======WELCOME TO MY NUMBER GUESSING GAME======"<<endl<<endl;
    do {
            if(attempts>=10){
                cout << "Go and eat some almonds"<<endl;
                cout<<"The secret number was " << secretnum;
                
                break;

            }
           cout<<"Guess a number between 0-100 : ";
            cin>>guessed;
            
            if(guessed<0 || guessed>100){
            cout<<"I asked you to enter number between 0-100 " << endl;
            continue;
    }
            attempts++;
        if (guessed > secretnum)
            cout << "Guessed number is High, Guess Low!\n";
        else if (guessed < secretnum)
            cout << "Guessed number is Low, Guess High!\n";
        else
            cout << "Congratulations! You guessed it right and in "<< attempts << " attempts";
    }
    while (guessed != secretnum);
    return 0;
}