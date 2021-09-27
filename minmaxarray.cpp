#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min,max;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cout<<"enter element "<<i<<endl;
        cin>>arr1[i];
    }
    min=arr1[0];
    max=arr1[0];
    
    cout<<endl<<"Display Array"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr1[i]<min)
        {
            min=arr1[i];
        }
        if(arr1[i]>max)
        {
            max=arr1[i];
        }
       
    }
    cout<<"min is "<<min<<endl;
    cout<<"max is "<<max<<endl;
            
    return 0;
}
