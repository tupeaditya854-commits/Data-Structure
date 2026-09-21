#include<iostream>
using namespace std;

int main()
{
int roll_no[5];
int ser; 
bool value;
  cout<<"Enter 5 Roll Number's of Students :  \n";
for (int i=0;i<5;i++)
        cin>>roll_no[i];
cout<<"Enter the Roll no to be searched : ";
    cin>>ser;
    for(int i=0;i<5;i++)
        {
    if(ser==roll_no[i])
        value=true;
            
}
    if (value==true)
        cout<<"Student Found....!!!";
    else
        cout<<"Student Not Found...!!!";
};