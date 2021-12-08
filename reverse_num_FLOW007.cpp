//Reverse a Number Codechef problem code FLOW007

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	std::cin >> t;
	while(t--){
	    int num,temp,d,count=0;
	    std::cin >> num;
	    temp=num;
	    while(temp>0){
	        temp=temp/10;
	        count++;
	    }
	    temp=0;
	    for(int i=count;i>0;i--){
	        d=num%10;
	        d=d * pow(10,i-1);
	        num=num/10;
	        temp=temp+d;
	    }
	    std::cout << temp/10 << std::endl;
	}
	return 0;
}
