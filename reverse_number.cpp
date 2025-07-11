#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number to reverse : ";
    cin >> n;
    int rev = 0;
    while (n > 0)
    {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    cout << "the reversed number is :" << rev;
    return 0;
}