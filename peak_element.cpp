#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; ++i)
        {
            if (i == 0)
            {
                if (n == 1 || nums[i] > nums[i + 1])
                {
                    return i;
                }
            }
            else if (i == n - 1)
            {
                if (nums[i] > nums[i - 1])
                {
                    return i;
                }
            }
            else
            {
                if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
                {
                    return i;
                }
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 1};
    Solution sol;
    int peakIndex = sol.findPeakElement(nums);
    cout << "Peak element index: " << peakIndex << endl;
    return 0;
}