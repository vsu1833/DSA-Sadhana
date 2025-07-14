#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int smallest_el(const vector<int> &arr)
{
    int n = arr.size();
    if (n < 2)
        return INT_MAX; 

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < second_smallest && arr[i] != smallest)
        {
            second_smallest = arr[i];
        }
    }
    return second_smallest;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n < 2)
    {
        cout << "Array must have at least two elements." << endl;
        return 0;
    }
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = smallest_el(arr);
    if (result == INT_MAX)
        cout << "No second smallest element exists." << endl;
    else
        cout << "The second smallest element in the array is: " << result << endl;
}