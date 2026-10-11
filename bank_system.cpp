#include <iostream>
#include <queue>
using namespace std;

int main() 
{
    queue<int> tokens;
    int nextToken = 1;
    int choice = 0;

    while (choice != 4) 
    {
        cout << "\n===== BANK TOKEN SYSTEM =====\n";
        cout << "1. Issue Token\n";
        cout << "2. Display All Tokens\n";
        cout << "3. Serve Customer\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
        {
            tokens.push(nextToken);
            cout << "Token issued: " << nextToken << endl;
            nextToken++;
        }
        else if (choice == 2) 
        {
            if (tokens.empty()) 
            {
                cout << "No tokens waiting.\n";
            } else 
            {
                cout << "Waiting tokens: ";
                queue<int> temp = tokens;   
                while (!temp.empty()) 
                {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << endl;
            }
        }
        else if (choice == 3) 
        {
            if (tokens.empty()) 
            {
                cout << "No customers to serve.\n";
            } else 
            {
                cout << "Now serving token: " << tokens.front() << endl;
                tokens.pop();
            }
        }
        else if (choice == 4) 
        {
            cout << "Exiting program. Thank you!\n";
        }
        else 
        {
            cout << "Invalid choice! Try again.\n";
        }
    }

    return 0;
}