#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> freq;

        for(int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
        }

        for(int i = 0; i < t.size(); i++) {
            if (--freq[t[i]] < 0) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution sol;
    string s = "anagram";
    string t = "nagaram";
    cout << boolalpha << sol.isAnagram(s, t) << endl;

    string s2 = "rat";
    string t2 = "car";
    cout << boolalpha << sol.isAnagram(s2, t2) << endl;

    return 0;
}
