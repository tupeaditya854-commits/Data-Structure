#include <iostream>
using namespace std;

int main() {
    int roll[5];

    cout << "Enter 5 roll numbers: \n";
    for (int i = 0; i < 5; i++)
        cin >> roll[i];
    cout<<"\n";

    cout << "Roll numbers are: \n";
    for (int i = 0; i < 5; i++)
        cout << roll[i] << " ";

    return 0;
}