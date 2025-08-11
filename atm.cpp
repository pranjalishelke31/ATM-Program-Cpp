#include<iostream>
using namespace std;
int main()
{
    int n,amnt,a,balance;
    balance=10000;


  do
  { 
    cout<<'\n'<<"-----ATM Menu-----"<<'\n';
    cout<<"1.Check Balance"<<'\n'<<"2.Deposit Money"<<'\n'<<"3.Withdraw Money"<<'\n'<<"4.Exit"<<'\n';
    cout<<"Enter your choice(1-4): ";
    cin>>n;
    if(n==1){
        cout<<"Your current Balance is "<<balance;
    }
    else if(n==2){
        cout<<"Enter amount to deposit: ";
        cin>>amnt;
        balance+=amnt;
        cout<<amnt<<" deposited successfully."<<'\n';
        cout<<balance<<" total balance."<<'\n';
    }
    else if(n==3){
        cout<<"Enter amount to withdraw: ";
        cin>>a;
        if(a>balance){
            cout<<"Insufficient Balance"<<'\n';}
        else{
            balance-=a;
            cout<<balance<<" amount is remain."<<'\n';}
      }
    else if(n==4){
      cout<<"Exiting Thank you!.";}
    
       
    else {
        cout<<"Invalid choice!!!";
    }
}
    while(n!=4);
 return 0;
 } 