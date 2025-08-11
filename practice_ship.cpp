#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canShip(vector<int>& weights, int capacity, int days) {
        int count = 1; 
        int sum = 0;

        for (int i = 0; i < weights.size(); i++) {

            if (sum < capacity) {
                sum += weights[i];
            }

            if (sum == capacity) {
                count++;
                sum = 0;
            }

            if (sum > capacity) {
                sum -= weights[i];
                i = i - 1; 
                count++;
                sum = 0;
            }

            if (count > days) {
                return false;
            }
        }
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canShip(weights, mid, days)) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;

    vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;

    int result = sol.shipWithinDays(weights, days);
    cout << "Minimum capacity to ship within " << days << " days: " << result << endl;

    return 0;
}
