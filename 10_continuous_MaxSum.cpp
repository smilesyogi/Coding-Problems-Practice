#include<bits/stdc++.h>
using namespace std;

    long long maxSubarraySum(int arr[], int n){
        long max=arr[0];
    for (int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {    
            long sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
            if(sum>max)
            {
                max=sum;
            }
        }
    }
        return max;
    }

int main()
{
    int n;
        cout<<"Enter array size"<<endl;
        cin>>n; //input size of array
        
        int a[n];
        cout<<"enter "<<n<<" elements"<<endl;
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
