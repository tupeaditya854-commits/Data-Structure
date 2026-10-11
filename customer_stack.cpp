#include <iostream>
using namespace std;

int main() 
{
    int stack[5];
    int top = -1;
    cout << " Enter 5 cancelled order numbers : "<< endl;
    for (int i = 0; i < 5; i++) 
    {
        cin >> stack[++top];
    }
    cout << "\n Cancelled orders (most recent first) : "<<endl;
    while (top >= 0) 
    {
        cout << stack[top] << endl;
        top--;
    }

    return 0;
}
