#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));//Statement used to change the random number

    int random_num=rand()%100+1;//Genarating random number
    int guess=0;
    int attempt=0;
    cout<<"*********WELCOME TO NUMBER GUESSING GAME**********"<<endl;
    string name;
    cout<<"Enter Your Name: ";
    cin>>name;
    cout<<name<<", Let's play the game."<<endl;
    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"Hints:Guess a number in range of 1 to 100"<<endl;
    cout<<endl;
    do{
        attempt++;
        cout<<"Enter your guess"<<endl;
        cin>>guess;
        if(guess==random_num){
            if(attempt==0){
            cout<<"Congrats "<<name<<", You guess the right number in the first attempt. "<<endl;
            }
            else{
            cout<<"Congrats "<<name <<", You guess the right number after "<<attempt<<" attempt."<<endl;
            }
        }
        else if(guess>random_num){
            cout<<"Wrong guesss!! You entered a higher number."<<endl;
            cout<<"Try again!!"<<endl;
        }
        else{
             cout<<"Wrong guesss!! You entered a lower number."<<endl;
             cout<<"Try again!!"<<endl;
        }

    }while(guess!=random_num);

    return 0;
}

/****************************************/
/**OUTPUT**
*********WELCOME TO NUMBER GUESSING GAME**********
Enter Your Name: Shan
Shan, Let's play the game.
-----------------------------------------------------------
Hints:Guess a number in range of 1 to 100

Enter your guess
50
Wrong guesss!! You entered a lower number.
Try again!!
Enter your guess
60
Wrong guesss!! You entered a lower number.
Try again!!
Enter your guess
70
Wrong guesss!! You entered a lower number.
Try again!!
Enter your guess
80
Wrong guesss!! You entered a lower number.
Try again!!
Enter your guess
90
Wrong guesss!! You entered a lower number.
Try again!!
Enter your guess
95
Wrong guesss!! You entered a lower number.
Try again!!
Enter your guess
99
Wrong guesss!! You entered a higher number.
Try again!!
Enter your guess
98
Wrong guesss!! You entered a higher number.
Try again!!
Enter your guess
97
Wrong guesss!! You entered a higher number.
Try again!!
Enter your guess
96
Congrats Shan, You guess the right number after 10 attempt.
*/