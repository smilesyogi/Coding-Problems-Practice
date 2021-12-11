//Codechef FLOW018 small factorial
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long t;
    std::cin >> t;
    for(long i=0;i<t;i++){
        long n,fact=1;
        std::cin >> n;
        while(n>0){
            fact*=n;
            n--;
        }
        std::cout << fact << std::endl;
    }
	return 0;
}
