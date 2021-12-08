// CODECHEF Practice Problem Problem Code: FCTRL2
// You are asked to calculate factorials of some small positive integers.
// Input
// An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100

#include<bits/stdc++.h>

int main()
{
   int t,j;
   std::cin >> t;
   while(t--)
   {
     int n;
     std::cin >> n;
     int a[1000] = {1};
     int m = 0;
     int carry = 0;
     for(int i=1; i<=n; i++)
     {
       for(j=0; j<=m; j++)
       {
         a[j] = (a[j]*i)+carry;
         carry = a[j]/10;
         a[j] = a[j]%10;
       }
       while(carry)
       {
         m++;
         a[m] = carry%10;
         carry/=10;
       }
     }

     for(int i=m; i>=0; i--)
        std::cout << a[i];
        std::cout << std::endl;
   }
   return 0;
}
