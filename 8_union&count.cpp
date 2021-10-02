// set is derived data type in STL c++ which has property to store unique element and in assending order by default.
#include<bits/stdc++.h>
using namespace std;

int main()
{
int arr1[]={0,1,2,3,7,8,9,0};
int arr2[]={1,4,5,6,2,1};

set <int> s;

for(int i=0;i<18;i++)
{
    s.insert(arr1[i]);
}

for(int i=0;i<1;i++)
{
    s.insert(arr2[i]);
}
int count=0;
for(auto it=s.begin(); it!=s.end(); ++it)
{
    cout<<" "<<*it;
    count++;
}
cout<<endl<<count;



    return 0;
}
