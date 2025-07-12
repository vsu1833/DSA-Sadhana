#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool check_palindrome(string s)
{
    string original_s = s;
    reverse(s.begin(), s.end());
    return original_s == s;
}

int main()
{
    string s;
    cout << "Enter string to be checked for palindrome :";
    getline(cin, s);
    cin >> s;

    if (check_palindrome(s))
        cout << "The string is a palindrome";
    else
        cout << "The string is not a palindrome";
}