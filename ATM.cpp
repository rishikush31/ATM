#include<bits/stdc++.h>
using namespace std;
#define ll long long
class bank
{
 private:
 
 public:
 string username;
 ll amount=0;
 string type;
 ll pin;
 void set_value()
 {
  cout<<"Enter your username: ";
  getline(cin,username);
  cout<<"Enter your pin: ";
  cin>>pin;
  cout<<"Enter your account type: ";
  cin>>type;
  cout<<"Enter your amount: ";
  cin>>amount;
 }
 void deposit()
 {
    int a ;
    cout<<"Enter your deposit amount: ";
    cin>>a;
    amount+=a;
 }
 void withdrawl()
 {
    int a ;
    cout<<"Enter your withdrawl amount: ";
    cin>>a;
    amount-=a;
 }
 void show_data()
 {
     cout<<"your username: "<<username;
    cout<<"your pin: "<<pin;
    cout<<"your account type: "<<type;
    cout<<"your amount: "<<amount;
 }  
};
int main()
{
    bank b;
    ll choice;
    while(true)
    {
     cout<<"welcome customer"<<endl;
     cout<<"press: "<<endl;
     cout<<"1-for set data"<<endl;
     cout<<"2-for deposit"<<endl;
     cout<<"2-for withdrawl"<<endl;
     cout<<"4-for balance"<<endl;
     cout<<"5-for exit"<<endl;
     cout<<"enter choice : ";
     cin>>choice;
     switch (choice)
     {
     case 1:
     {
     b.set_value();
        break;
     }
     case 2:
     {
        b.deposit();
        break;
     }
     case 3:
     {
        b.withdrawl();
        break;
     }
     case 4:
     {
        b.show_data();
        break;
     }
     case 5:
     {
        exit(true);
     }
     default:
     {
        cout<<"enter a valid choice between 1 to 5"<<endl;
        break;
     }
     }
    }
    return 0;
}