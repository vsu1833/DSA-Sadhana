#include <vector>
#include <algorithm>
#include <climits>
using namespace std;



class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int size1 = nums1.size();
        int size2 = nums2.size();

        int low = 0;
        int high = size1;

        while (low <= high) {
            int partition1 = (low + high) / 2;
            int partition2 = (size1 + size2 + 1) / 2 - partition1;

            int maxLeft1;
            if (partition1 == 0) {
                maxLeft1 = INT_MIN;
            } else {
                maxLeft1 = nums1[partition1 - 1];
            }

            int minRight1;
            if (partition1 == size1) {
                minRight1 = INT_MAX;
            } else {
                minRight1 = nums1[partition1];
            }

            int maxLeft2;
            if (partition2 == 0) {
                maxLeft2 = INT_MIN;
            } else {
                maxLeft2 = nums2[partition2 - 1];
            }

            int minRight2;
            if (partition2 == size2) {
                minRight2 = INT_MAX;
            } else {
                minRight2 = nums2[partition2];
            }

            if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
                if ((size1 + size2) % 2 == 0) {
                    return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
                } else {
                    return (double)max(maxLeft1, maxLeft2);
                }
            } else if (maxLeft1 > minRight2) {
                high = partition1 - 1;
            } else {
                low = partition1 + 1;
            }
        }

        return 0.0;
    }
};
int main() {
    Solution solution;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    double result = solution.findMedianSortedArrays(nums1, nums2);
    return 0;
}