// There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

// Example


// There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .

// Function Description

// Complete the sockMerchant function in the editor below.

// sockMerchant has the following parameter(s):

// int n: the number of socks in the pile
// int ar[n]: the colors of each sock
// Returns

// int: the number of pairs
// Input Format

// The first line contains an integer , the number of socks represented in .
// The second line contains  space-separated integers, , the colors of the socks in the pile.

#include<bits/stdc++.h>
using namespace std;


int sockMerchant(int n, vector<int> &ar) {
    map<int,int> Mymap;
    int count=0;
    for(int & n:ar){
        Mymap[n]++;
        if(!(Mymap[n]%2))
        count++;
    }
    return count;
}
int main()
{
    int p,n=5;
    vector <int> ar;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        ar.push_back(p);
    }
    cout<<sockMerchant(n,ar);
}
