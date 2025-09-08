#include <iostream>

void  checkbalance (float balance);
float deposit();
float withdaw(float balance);
using namespace std;

int main(){
 int choice = 0;
 float balance = 100.00;
  
  cout <<"====-Welcome to bank-====\n";
 
   do {
        cout <<"\nSelect an option\n";
        cout <<"1. Check balance\n";
        cout <<"2. Deposit money\n";
        cout <<"3. Withdraw money\n";
        cout <<"4. Exit\n";

        cout <<"Enter your choice number: ";
        cin >> choice;

        switch(choice) {
            case 1:
                checkbalance(balance);
                break;

            case 2:
                balance += deposit();
                break;

            case 3:
                balance -= withdaw(balance);
                break;

            case 4:
                cout <<"\nThanks for visiting\n";
                break;

            default:
                cout <<"INVALID CHOICE!!\nPlease select 1-4\n";
        }
    } while(choice != 4);

    return 0;
}
void  checkbalance (float balance){
cout<<"\nYour current balance is"<<balance<<"/-";
}
float deposit(){
float amount = 0.00;
cout <<"Enter amount to deposit: ";
cin>>amount;

if(amount <0){
    cout <<"Invalid amount\n";
    return 0.00;
}
else{
    cout<<"Successfully deposited "<<amount <<"/-";
    return amount;
}
}
float withdaw(float balance){
float amount =0.00;
cout <<"\nenter withdaw amount ";
cin>>amount;

if(amount<0){
    cout<<"Inbalid amount\n";
    return 0.00;
}
else if(amount > balance){
    cout<<"insufficient fund's \nyour balance"<<balance<<"/-";
    return 0.00;
}
else{
    cout<<"sucssfullay withdrew"<<amount<<"/-";
    return amount;
}
}