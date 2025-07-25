#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        int findKthPositive(vector<int>& arr, int k) {
            for (int i = 0; i < arr.size(); ++i) {
                if (arr[i] <= k) {
                    k++;
                } else {
                    break;
                }
            }
            return k
            ;
        }
    };
    
int main() {
    Solution solution;
    vector<int> arr = {2, 3, 4, 7, 11};
    int k = 5;
    cout << "The kth missing positive number is: " << solution.findKthPositive(arr, k) << endl;
    return 0;
}