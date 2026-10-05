#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    queue<int> customers;
    int token;

    
    cout << "Enter 5 customer token numbers:\n";
    for (int i = 0; i < 5; i++) 
    {
        cin >> token;
        customers.push(token);
    }

    
    cout << "\nCustomers will be served in this order:\n";

    while (!customers.empty()) {
        cout << "Token Number: " << customers.front() <<endl;
        customers.pop();
    }

    return 0;
} 