#include<iostream>
using namespace std;
void menu ()
{
    int choice;
    cout<<"\n 1.PIZZA \n";
    cout<<"\n 2.BURGER \n";
    cout<<"\n 3. PASTA \n";
    cout<<"\n 4.EXIT \n";

    cout<<"\n Enter Your Choice :  ";
    cin>>choice;
    if(choice==1)
    {
        cout<<" \n You Selected Pizza \n ";
        menu();
    }
    else if(choice==2)
    {
        cout<<" \n You Selected Burger \n ";
        menu();
    }
    else if(choice==3)
    {
        cout<<" \n You Selected Pasta \n ";
        menu();
    }
    else
    {
        cout<<" \n Menu Exit \n ";
    }


    
}
int main()
{
    menu();
    return 0;
}



