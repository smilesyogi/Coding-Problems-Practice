#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i<<endl;
        cin>>arr1[i];
    }
    cout<<endl<<"before reverse"<<endl;
        for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
            for(int i=0;i<n/2;i++)
    {
        int temp;
        temp=arr1[i];
        arr1[i]=arr1[n-1-i];
        arr1[n-1-i]=temp;
    }
    cout<<endl<<"after reverse"<<endl;
            for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    
    return 0;
}
