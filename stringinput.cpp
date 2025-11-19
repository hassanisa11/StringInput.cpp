#include <iostream>
#include <string>
#include <limits> // IMPORTANT: THIS IS REQUIRED FOR numeric_limits
using namespace std;

int main()
{
    string FullName;

    cout << "Enter your full name\n";
    cin >> FullName;
    cout << "Hi," << FullName << ". Nice to meet you!" << endl;

    // clear everything in the buffer up to and including the newline
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter yourFullName\n";
    getline(cin, FullName);
    cout << "Hi again " << FullName << ", Nice to meet you!" << endl;
    return 0;
}