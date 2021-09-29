#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int divide(int arr[], int low, int high)
{
    //pointer for greater element
    int i=(low-1);
    //select pivote to rightmost element;
    int pivote=arr[high];
    for(int j=low;j<high;j++)
    {
        if(arr[j]<=pivote)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    //after traversing swap pivote element in middle of smaller and greater elements
    swap(&arr[i+1], &arr[high]);
    //return the patition pointer
    return (i+1);
}

void quickSort(int arr[], int low, int high)
{
     if (low < high) {
      
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on righ of pivot
    int pi = divide(arr, low, high);

    // recursive call on the left of pivot
    quickSort(arr, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(arr, pi + 1, high);
  }
}

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
    int size=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    quickSort(arr, 0, n-1);
    printArray(arr,size);

    return 0;
}
