#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c0=0,c1=0,c2=0;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n],arr2[n];
    cout<<"Enter "<<n<<" Elements in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }
        if(arr[i]==1)
        {
            c1++;
        }
        if(arr[i]==2)
        {
            c2++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(c0!=0)
        {
            arr2[i]=0;
            c0--;
        }
        else if(c1!=0)
        {
            arr2[i]=1;
            c1--;
        }
        else if(c2!=0)
        {
            arr2[i]=2;
            c2--;
        }
    }
        for(int i=0;i<n;i++)
        {
            cout<<arr2[i]<<" ";
        }
    
    return 0;
}
