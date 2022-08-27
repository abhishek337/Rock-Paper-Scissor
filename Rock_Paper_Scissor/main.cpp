#include <iostream>
#include <ctime>
using namespace std;

const char ROCK = 'R';
const char PAPER = 'P';
const char SCISSORS = 'S';

char getComputerOption() {
    srand(time(0));
    // Random number
    int num = rand() % 3 + 1;
 
    if(num==1) return 'R';
    if(num==2) return 'P';
    if(num==3) return 'S';
}

void check_condition(char uChoice, char cChoice){

    if (uChoice == ROCK && cChoice == PAPER) {
        cout << "You Lost! Paper wraps Rock."<< endl;
    }
    else if (uChoice == PAPER && cChoice == SCISSORS) {
        cout << "You Lost! Scissors cut Paper."<< endl;      
    }
    else if (uChoice == SCISSORS && cChoice == ROCK) {
        cout << "You Lost! Rock smashes Scissors."<< endl;     
    }
    else if (uChoice == ROCK && cChoice == SCISSORS) {
        cout << "You Win! Rock smashes Scissors ."<< endl;     
    }
    else if (uChoice == PAPER && cChoice == ROCK) {
        cout << "You Win! Paper wraps Rock."<< endl;        
    }
    else if (uChoice == SCISSORS && cChoice == PAPER) {
        cout << "You Win! Scissors cut Paper."<< endl;
    }
    else{
        cout << "Tie. Play again win the Game." << endl;
    }
}

int main(){
char usrChoice;
char otherUsrChoice;
char compChoice;
int opt;
char option;

cout<<"Rock Paper Scissor Game !"<<endl;
cout<<endl;

do
{

cout<<"___________________________________"<<endl;
cout<<"Choose Playmode : "<<endl;
cout<<"1. P vs P"<<endl;
cout<<"2. P vs Comp."<<endl;
cout<<"___________________________________"<<endl;

cin>>opt;

if(opt == 1){

cout<<"___________________________________"<<endl;
cout<<"Choose (R) for Rock."<<endl;
cout<<"Choose (P) for Paper."<<endl;
cout<<"Choose (S) for Scissor."<<endl;
cout<<"___________________________________"<<endl;
cout<<endl;

cout<<"Enter your choice : "<<endl;
cin>>usrChoice;

cout<<"Enter other player's choice : "<<endl;
cin>>otherUsrChoice;

cout<<endl;

check_condition(usrChoice, otherUsrChoice);

}
else if(opt == 2){

cout<<"___________________________________"<<endl;
cout<<"Choose (R) for Rock."<<endl;
cout<<"Choose (P) for Paper."<<endl;
cout<<"Choose (S) for Scissor."<<endl;
cout<<"___________________________________"<<endl;
cout<<endl;

cout<<"Enter your choice : "<<endl;
cin>>usrChoice;

compChoice = getComputerOption();
cout<<"Computers Choice is : "<<compChoice<<endl;
cout<<endl;

check_condition(usrChoice, compChoice);

}
else{
    cout<<"Entered Wrong Option."<<endl;
}

cout<<"Do you want to play again ? (Y/N) "<<endl;
cin>>option;
cout<<endl;
    
} while (option == 'y' || option == 'Y');

cout<<endl;
cout<<"Thanks For Playing ...!"<<endl;

    return 0;
}