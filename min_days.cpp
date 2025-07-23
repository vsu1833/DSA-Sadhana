#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        int n = bloomDay.size();
        if (val > n) return -1;
        
        int mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            mini = min(mini, bloomDay[i]);
            maxi = max(maxi, bloomDay[i]);
        }

        int left = mini, right = maxi;
        int result = -1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (possible(bloomDay, mid, m, k)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        return result;
    }

private:
    bool possible(vector<int> &arr, int day, int m, int k) {
        int n = arr.size();
        int cnt = 0;
        int noOfB = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= day) {
                cnt++;
            }
            else {
                noOfB += (cnt / k);
                cnt = 0;
            }
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }
};

int main() {
    Solution sol;
    
    vector<int> bloomDay1 = {1, 10, 3, 10, 2};
    int m1 = 3, k1 = 1;
    cout << "Test Case 1: " << sol.minDays(bloomDay1, m1, k1) << endl;  
    
    vector<int> bloomDay2 = {1, 10, 3, 10, 2};
    int m2 = 3, k2 = 2;
    cout << "Test Case 2: " << sol.minDays(bloomDay2, m2, k2) << endl;  
    return 0;
}