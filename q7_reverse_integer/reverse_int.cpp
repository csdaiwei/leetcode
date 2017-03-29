#include <iostream>
using namespace std;



class Solution {
public:
    int reverse(int x) {

    	long rev = 0;

    	while(x){

    		rev = rev * 10 + x % 10;
    		x /= 10;

    	}

    	if (rev > INT_MAX || rev < INT_MIN)
    		return 0;

    	return (int)rev;
        
    }
};



int main(int argc, char const *argv[]){
	
	Solution s;
	int rev = s.reverse(10);

	cout << rev << endl;

	return 0;


}