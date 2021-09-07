#include <iostream>
#include <string>         // Include string (std namespace)
using namespace std;

int main()
{
    int m = 1;
    int n = 3;
    string s1, s2="hello";    // Create strings
    s1.size(), s2.size();     // Number of characters: 0, 5
    s1 += s2 + ' ' + "world"; // Concatenation
    s1 == "hello world" ;      // Comparison, also <, >, !=, etc.
    s1[0];                    // 'h'
    s1.substr(m, n);          // Substring of size n starting at s1[m]
    s1.c_str();               // Convert to const char*
    s1 = to_string(12.05);    // Converts number to string

    // Second example
    string variable1 = "Hello World";

    string firstName = "Harry ";
    string lastName = "Bhai";
    string fullName = firstName.append(lastName);
    cout << fullName << endl;

    string variable3 = "CodeWithHarry";
    cout << "The length of the string is: " << variable3.length() << endl;

    string variable2 = "Hello World";
    variable2[1] = 'i';
    cout << variable2 << endl;

    string S;
 
    cout << "Enter a string" << endl;
    cin >> S;
  
    cout << S << endl;


    string fullName;
    cout << "Type your full name: ";
    getline (cin, fullName);
    cout << "Your name is: " << fullName;
}