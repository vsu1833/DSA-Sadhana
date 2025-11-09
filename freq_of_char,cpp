#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int>freq;

    for (int i = 0; i < str.length(); i++)
    {
     freq[str[i]]++;
    }

    cout << "\nCharacter frequencies:\n";
    for (auto it = freq.begin(); it != freq.end(); it++)
    {
     cout << "'" << it->first << "' : " << it->second << endl;
    }
    return 0;
}
