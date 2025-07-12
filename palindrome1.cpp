#include <iostream>
using namespace std;

bool check_palindrome(string s)
{
    int left = 0, right = s.size() - 1;
    while (left <= right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter the string to be checked for palindrome: ";
    getline(cin, s);

    if (check_palindrome(s))
    {
        cout << "The string is a palindrome";
    }
    else
    {
        cout << "The string is not a palindrome";
    }
}