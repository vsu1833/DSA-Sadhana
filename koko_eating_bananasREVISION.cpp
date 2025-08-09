#include <iostream>
#include <cmath>
using namespace std;

 int findHours(int *arr, int n, int b)
 {
  int hours = 0;
  for(int i = 0 ; i < n; i++)
  {
    hours+= ceil((double)arr[i]/b);
  }
  return hours;
  
 }

int minEatingSpeed(int *arr, int n, int h)
{
  int maxVal = 0;
  for(int i = 0; i < n; i++)
  {
    if(arr[i] > maxVal)
      maxVal = arr[i];
  }
  
  for(int i = 1 ; i <= maxVal ;i++)
  {
    int totalHours = findHours(arr, n, i);
    if(totalHours <= h)
    {
      return i;
}  
}
  return maxVal;
}

int main()
{
  int n, h;
  cout << "Enter number of piles: ";
  cin >> n;
  
  int *arr = new int[n];
  cout << "Enter pile sizes: ";
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
}
  cout << "Enter hours available: ";
  cin >> h;
  
  int result = minEatingSpeed(arr, n, h);
  cout << "Minimum eating speed: " << result << endl;
  
  delete[] arr;
  return 0;
}



