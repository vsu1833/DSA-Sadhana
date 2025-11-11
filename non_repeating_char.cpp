#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void non_repeating_char(const vector<int>& nums)
{
    unordered_map<int, int> freq;
    for (int i : nums)
    {
        freq[i]++;
    }

    cout << "Non-repeating numbers are: ";

    for (auto it : freq)
    {
        if (it.second == 1)
        {
            cout << it.first << " ";
        }
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {1, 2, 2, 3, 4, 4, 5};
    non_repeating_char(nums);

    return 0;
}