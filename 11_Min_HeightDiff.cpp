//Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify
//the height of each tower either by increasing or decreasing them by K only once.
//Find out what could be the possible minimum difference of the height
//of shortest and longest towers after you have modified each tower.

#include <bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k) 
{
   
       sort(arr, arr+n);
       int result = arr[n - 1] - arr[0];
       int max = arr[n - 1];
       int min = arr[0];
       
       for (int i = 1; i < n; i++) {
       
       max = std::max(arr[i - 1] + k, arr[n - 1] - k);
       min = std::min(arr[0] + k, arr[i] - k);
       
       result = std::min(result, max-min);
       
       }
       return result;
}
int main() 
{
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getMinDiff(arr, n, k);
        cout <<"min Height diff is : "<<ans << "\n";
    
    return 0;
    }
