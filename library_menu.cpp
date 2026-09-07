#include<iostream>
using namespace std;

int main()
{
    int book[10];
    int n=0;
    int choice;
    int searchID;
    
    
do
{
    cout<<"\n ------------------ SMART LIBRARY -------------------";
    cout<<endl;
    cout<<endl;
    cout<<"\n 1. Adding a Book ID ";
    cout<<"\n 2. Display all the Books";
    cout<<"\n 3. Book ID Search ";
    cout<<"\n 4. EXIT ";
    cout<<"\n";
    cout<<"\n Enter Your Choice ::  ";
    cin>>choice;

    if(choice==1)
    {
     cout<<"\n Enter Book Id to be Added : ";
         cin>>book[n];
        cout<<"Book Added Successfully...";
        n++;
        
    }
    else if(choice==2)
    {
        cout<<"\n All The Library Books are ::  ";
        for(int i=0;i<n;i++)
            {
            cout<<book[i]<<endl;
            }
    }
        

    else if(choice==3)
    {
        cout<<" \n Enter Book ID to be Searched ::  ";
        cin>>searchID;
        bool found = false;
        for(int i=0;i<n;i++)
            {
                if(book[i] == searchID)
                {
                    found=true;
                }
            }
        if(found)
        {
            cout<<" \n Book Found Successfully....✅ ";
        }
        else
          cout<<" \n Book Not Found ❌";
    }
    else if(choice==4)
    {
     cout<<"\n THANK YOU FOR VISITING......🙏🏻";
    }
    else
    {
        cout<<"\n Wrong Choice Entered  ❌ ";   
    }
    
}while(choice!=4);
        return 0;
    
}