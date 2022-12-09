#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class account
{
private:
 int accno;
 char name[30],atype[30];

 public:
  void getdetail()
  {
  cout<<"\nEnter the coustmer name: ";
  cin>>name;
  cout<<"\nEnter account number   : ";
  cin>>accno;
  cout<<"\nEnter the account type : ";             //ac creation
  cin>>atype;                                      //deposit
  }                                                //withdraw
  void displaydetail()                             //balance
  {
  cout<<"\nNAME        : "<<name;
  cout<<"\nACCOUNT NO  : "<<accno;
  cout<<"\nACCOUNT TYPE: "<<atype;
  }
  };
class c_account:public account
{
 public:
 float balance;
  public:
  void c_display()
  {
  cout<<"\nBalance : "<<balance;
  }

  void c_deposit()
  {
  float deposit;

  cout<<"\nEnter the deposit amount: ";
  cin>>deposit;
  balance=balance+deposit;
  cout<<"\nBalance amount after deposit : "<<balance;
  }

  void c_withdraw()
  {
  float withdraw;

  cout<<"\nEnter the withdraw amount: ";
  cin>>withdraw;
  if(withdraw>=1000)
  {
  balance=balance-withdraw;
  cout<<"\nBalance amount after withdraw: "<<balance;
  }
  else
  {
  cout<<"\nwithdraw amount only above 1000rs or equal to 1000rs";
  }
  }
 };

class s_account:public account
{
 private:
 float s_balance;
  public:
  void s_display()
  {
  cout<<"\nBalance : "<<s_balance;
  }

  void s_deposit()
  {
  float deposit,intrest;

  cout<<"\nEnter the deposit amount: ";
  cin>>deposit;
  s_balance=s_balance+deposit;
  intrest=(s_balance*2)/100;
  s_balance=s_balance+intrest;
  cout<<"\nBalance amount after deposit: "<<s_balance;
  }

  void s_withdraw()
  {
  float withdraw;
  cout<<"\nEnter the withdraw amount: ";
  cin>>withdraw;
  if(s_balance>500)
  {
  s_balance=s_balance-withdraw;
  cout<<"\nBalance amount after withdraw: "<<s_balance;
  }
  else
  {
  cout<<"\nInsufficient balance ! ";
  }
  }
};
void main()
{
clrscr();
s_account s1;
c_account c1;
char type;
int choice;
cout<<"\n\t\t\tWelcome To IOB Bank";
cout<<"\n\t\t\t^^^^^^^^^^^^^^^^^^^";
cout<<"\n\nEnter S for saving a/c (or) Enter C for current a/c: ";
cin>>type;
 if(type=='s'||type=='S')
 {
 s1.getdetail();
 while(1)
 {
 cout<<"\n------------------";
 cout<<"\nChoose your choice";
 cout<<"\n------------------";
 cout<<"\n1)  Deposit"<<endl;
 cout<<"\n2)  Withdraw"<<endl;
 cout<<"\n3)  Display balance"<<endl;
 cout<<"\n4)  Display full detail"<<endl;
 cout<<"\n5)  EXIT"<<endl;
 cout<<"\t\nENter your choice: ";
 cin>>choice;

 switch(choice)
 {
   case 1:
   s1.s_deposit();
   break;

   case 2:
   s1.s_withdraw();
   break;

   case 3:
   s1.s_display();
   break;

   case 4:
   s1.displaydetail();
   break;

   case 5:
   goto end;
   break;

   default:
   cout<<"\nINVALID CHOICE ! ";
  }
 }
}
else if(type=='c'||type=='C')
{
  s1.getdetail();
 while(1)
 {
 cout<<"\n------------------";
 cout<<"\nChoose your choice";
 cout<<"\n------------------";
 cout<<"\n1)  Deposit"<<endl;
 cout<<"\n2)  Withdraw"<<endl;
 cout<<"\n3)  Display balance"<<endl;
 cout<<"\n4)  Display full detail"<<endl;
 cout<<"\n5)  EXIT"<<endl;
 cout<<"\t\nENter your choice: ";
 cin>>choice;

 switch(choice)
 {
   case 1:
   c1.c_deposit();
   break;

   case 2:
   c1.c_withdraw();
   break;

   case 3:
   c1.c_display();
   break;

   case 4:
   c1.displaydetail();
   c1.c_display();
   break;

   case 5:
   goto end;
   break;

   default:
   cout<<"\nINVALID CHOICE ! ";
  }
 }
}
else
{
cout<<"\nINVALID ACCOUNT !";
}
end:
cout<<"\nThank you for banking with us";
getch();
}










