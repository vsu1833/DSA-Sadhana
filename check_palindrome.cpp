#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to be checked for palindrome : ";
    cin >> n;
    int org = n;
    int rev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    if (org == rev)
    {
        cout << "The number is a palindrome.";
    }
    else
    {
        cout << "The number is not a palindrome.";
    }
    return 0;
}