#include <iostream>
#include<conio.h>
#include<string>
#include<stdio.h>
#include<windows.h>
#include<vector>
#include<fstream>
using namespace std;
static int i=-1;
class bank
{
private:
    int age;
    int bal;
    string name;
    string dob;
    string date;
    string accno;
    string phone;
    string aadharNo;
    string depositDate;
    string withdrawDate;
public:

    void createAcc();
    void show();
    void listofAcc();
    void update(int);
    void transaction(int);
    string getAcc();
};


void bank::createAcc()
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout<<"\nEnter today's date:";
    cin>>date;
    cout<<"\nEnter name:";
    cin>>name;
    cout<<"\nEnter Date of Birth:";
    cin>>dob;
    cout<<"\nEnter aadhar number:";
    cin>>aadharNo;
    cout<<"\nEnter account number:";
    cin>>accno;
    cout<<"\nEnter age:";
    cin>>age;
    cout<<"\nEnter phone number:";
    cin>>phone;
    cout<<"\nEnter the amount to deposit:";
    cin>>bal;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
    cout<<"*****************Congratulation Account successfully created********************";
}
void bank::show()
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout<<"\nCustomer Name:  "<<name;
    cout<<"\nCustomer account number:  "<<accno;
    cout<<"\nCustomer date of birth:  "<<dob;
    cout<<"\nBalance:  "<<bal;
}
void bank::update(int j)
{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);

cout<<"\n What you want to update:";
cout<<"\n1.phone number";
cout<<"\n2.Date of birth";
int k;
cout<<"\nEnter your choice:";
cin>>k;
switch(k)
{
    case 1:
    {
        cout<<"\nEnter new phone number:";
        cin>>phone;
        break;
    }
    case 2:
    {
        cout<<"\nEnter new date of birth:";
        cin>>dob;
        break;
    }
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
    cout<<"*****************Congratulation Account successfully updated********************";
}
void bank::transaction(int j)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout<<"\n1.Withdraw";
    cout<<"\n2.Deposit";
    int f;
    cout<<"\nEnter your choice:";
    cin>>f;
switch(f)
    {
        case 1:
            {
                cout<<"\nEnter money to withdraw:";
                int ba;
                cin>>ba;
                if(ba>bal)
                    cout<<"\nTry Again,Not enough money!!!";
                else
                {bal=bal-ba;
                 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
                 cout<<"\n*********************transaction takes place successfully***********************";
                }
                break;
            }
      case 2:{
                cout<<"\nEnter money to deposit:";
                int ba;
                cin>>ba;
                bal=bal+ba;
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
    cout<<"\n*********************transaction takes place successfully***********************";
                break;
              }
}

}
string bank::getAcc()
{
    return accno;
}

int main()
{
    bank b[100];
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),100);
string s;
cout<<"**************Enter Password to go to Amit Bank Managment System****************";
int n=1;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);//green
cout<<"Password-";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);//green
while(n!=0)
{
getline(cin,s);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
if(s!="1234")
{
       cout<<"Warning-";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);//red
       cout<<"Wrong Password!!";//blue
       cout<<"\nTry Again:";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
       cout<<"\nPassword-";
}
else
    n=0;
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);//green
cout<<"Loading................";
Sleep(2000);
system("cls");
int a=1;
while(a!=6)
{
if(a>6 && a<1)
{
    cout<<"INVALID INPUT,Try Again........";
    Sleep(3000);
    system("cls");
    break;
}
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);//mixture of yellow and red
cout<<"***************************Welcome to Amit Bank System**************************";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),8);
cout<<"\n   1.Create new account\n";
cout<<"   2.Update information of existing account\n";
cout<<"   3.For transaction\n";
cout<<"   4.Check the details of existing account\n";
cout<<"   5.Show list of all customers \n";
cout<<"   6.Exit\n";
cout<<"\nEnter your choice:";
cin>>a;
switch(a)
{
    case 1:
{
  cout<<"\nLoading.............";
  Sleep(2000);
  system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
  cout<<"*******************************Creating Account*********************************";
        i++;
        b[i].createAcc();
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
  cout<<"\nGoing back to main page...........................";
  Sleep(3000);
  system("cls");
        break;
}
    case 2:
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
    cout<<"\nLoading................\n";
    Sleep(2000);
    if(i==-1){
    cout<<"No account found,first create an account";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout<<"\nTry Again......................";
    Sleep(3000);
    system("cls");
    break;}
    system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
cout<<"********************************Updating Account********************************";
cout<<"\nEnter customer account number:";
string accn;int q;
cin>>accn;
for(int j=0;j<=i;j++)
{
    if(b[j].getAcc()==accn)
        {
            q=j;
            break;
        }
    else q=i+1;
}
if(q==i+1)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
    cout<<"\nInvalid Account Number";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout<<"\nGoing back to main menu................";
    Sleep(3000);
    system("cls");
    break;
}
b[q].update(q);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
  cout<<"\nGoing back to main page...........................";
  Sleep(3000);
  system("cls");
break;
}
case 3:
        {
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
    cout<<"\nLoading................\n";
    Sleep(2000);
    if(i==-1){
    cout<<"No account found,first create an account";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout<<"\nTry Again......................";
    Sleep(3000);
    system("cls");
    break;}
    system("cls");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
cout<<"*********************************Transaction***********************************";
cout<<"\nEnter customer account number:";
string accn;int w;
cin>>accn;
for(int j=0;j<=i;j++)
{
    if(b[j].getAcc()==accn)
       {
           w=j;
           break;
       }
       else w=i+1;
}
if(w==i+1)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
 cout<<"\nInvalid Account Number";
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout<<"\nGoing back to main menu................";
    Sleep(3000);
    system("cls");
    break;
}
b[w].transaction(w);
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
  cout<<"\nGoing back to main page...........................";
  Sleep(3000);
  system("cls");
break;
}
case 4:
    {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
    cout<<"\nLoading................\n";
    Sleep(2000);
    if(i==-1){
    cout<<"No account found,first create an account";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout<<"\nTry Again......................";
    Sleep(3000);
    system("cls");
    break;}
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
cout<<"********************************Customer details*******************************";
           cout<<"\nEnter customer account number:";
           string accn;int w;
           cin>>accn;
for(int j=0;j<=i;j++)
{
    if(b[j].getAcc()==accn)
       {
           w=j;
           break;
       }
       else w=i+1;
}
if(w==i+1)
{
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
 cout<<"\nInvalid Account Number";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout<<"\nGoing back to main menu................";
    Sleep(3000);
    system("cls");
    break;
}
        b[w].show();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
        int f=0;
        while(f!=1)
{
        cout<<"\nPress 1 to go to main menu-";
        cin>>f;
         if(f==1)
         break;
         else
         {
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
             cout<<"\nInvalid Input\nTry Again:";
         }
         }
        system("cls");
        break;
        }
    case 5:
        {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),128);
    cout<<"\nLoading................\n";
    Sleep(2000);
    if(i==-1)
{
    cout<<"No account found,first create an account";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    cout<<"\nTry Again......................";
    Sleep(3000);
    system("cls");
    break;
}
    system("cls");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
cout<<"*******************************Customers details********************************";
for(int j=0;j<=i;j++)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
        cout<<"\n\nCustomer "<<j+1;
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
        b[j].show();
    }
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
        int f=0;
        while(f!=1)
{
        cout<<"\nPress 1 to go to main menu-";
        cin>>f;
         if(f==1)
         break;
         else
         {
             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),4);
             cout<<"\nInvalid Input\nTry Again:";
         }
         }
        system("cls");
        break;
        }
    case 6: break;
}
}
        return 0;
}
