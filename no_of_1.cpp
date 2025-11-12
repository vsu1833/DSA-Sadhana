#include <iostream>
using namespace std;

class Solution
{
public:
    int hammingWeight(int n)
    {
        int count = 0;
        int helper = 1;
        for (int i = 0; i < 32; i++)
        {
            if ((n & helper) != 0)
            {
                count++;
            }
            helper = helper << 1;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = sol.hammingWeight(n);
    cout << "Number of 1 bits: " << result << endl;
    return 0;
}