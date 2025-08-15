#include <iostream>
using namespace std;

int main()
{
    string s = "(()())(())";
    string ans = "";
    int count = 0;
    for (char ch : s)
    {
        if (ch == '(')
        {
            if (count > 0)
            {
                ans += ch;
            }
            count++;
        }
        else
        {
            count--;
            if (count > 0)
            {
                ans += ch;
            }
        }
    }
    cout << ans << endl;
    return 0;
}