#include <iostream>
using namespace std;

bool check_palindrome(const string &s, int left, int right)
{
    if (left >= right)
        return true;
    if (s[left] != s[right])
        return false;
    return check_palindrome(s, left + 1, right - 1);
}

bool call_check_palindrome(const string &s)
{
    return check_palindrome(s, 0, s.size() - 1);
}

int main()
{
    string s;
    cout << "Enter a string to be checked for palindrome: ";
    cin >> s;
    if (call_check_palindrome(s))
        cout << "The string is a palindrome.";
    else
        cout << "The string is not a palindrome.";
    return 0;
}
