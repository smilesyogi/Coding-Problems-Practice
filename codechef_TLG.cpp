//Codechef The lead game TLG code

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int r,p1,p2,pl1=0,pl2=0,sum1=0,sum2=0,l1=0,l2=0;
	std::cin >> r;
	while(r--){
	    
	    std::cin >> p1>>p2;
	    sum1=sum1+p1;
	    sum2=sum2+p2;
	    if(sum1>sum2)
	    {
	        pl1=sum1-sum2;
	    }
	    else if(sum2>sum1)
	    {
	        pl2=sum2-sum1;
	    }
	    
	    if(pl1>l1)
	    l1=pl1;
	    if(pl2>l2)
	    l2=pl2;
	}
	
	if(l1>l2) 
	    std::cout << "1 " <<l1 << std::endl;
	else if(l2>l1) 
	    std::cout << "2 " <<l2 << std::endl;
	return 0;
}
