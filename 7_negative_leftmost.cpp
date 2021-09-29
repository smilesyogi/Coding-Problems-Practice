#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void nlpr(int arr[], int size)
{
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(&arr[i], &arr[j]);
            }
            j++;
        }
    }
}
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
        cout<<arr[i]<<" ";
    }
    nlpr(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    
    return 0;
}
