#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter K to find Kth Smallest element "<<endl;
    int k;
    cin>>k;
    int s_arr=sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+s_arr);
    cout<<arr[k-1];
    return 0;
}
