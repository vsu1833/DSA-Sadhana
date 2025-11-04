#include<iostream>
using namespace std;

int peakElement(int *arr, int n)
{
    int maxi = 0;
    for(int i = 0; i < n; i++)
    {
        int maxi = max(arr[i],maxi);
    }
    return maxi;
}