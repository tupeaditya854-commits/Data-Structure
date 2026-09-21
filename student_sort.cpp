#include<iostream>
using namespace std;
int main()
{
    int marks[5];
    int temp;
    cout<<"Enter the marks of 5 Students : \n";
    for(int i=0;i<5;i++)
        cin>>marks[i];
    cout<<"Following are the marks obtained by students in descending order :: \n";
    for (int i = 0; i < 5; i++) 
    {
        for (int j = i + 1; j < 5; j++) 
        {
            if (marks[i] < marks[j]) 
            {
                temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
        
    for(int i=0;i<5;i++)
        cout<<marks[i]<<"\n";
    
};