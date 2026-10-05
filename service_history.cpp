#include <iostream>
#include <stack>
using namespace std;

int main() 
{
    stack<int> tokens;
    int token;

    
    cout << "Enter 5 served token numbers:\n";

    for (int i = 0; i < 5; i++) 
    {
        cin >> token;
        tokens.push(token);
    }

    
    cout << "\nService History (Most Recent First):\n";

    while (!tokens.empty()) 
    {
        cout << "Token Number: " << tokens.top() << endl;
        tokens.pop();
    }

    return 0;
}