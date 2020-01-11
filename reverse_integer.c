#include<stdio.h>
// reference: leetcode-07

int reverse(int);

int reverse(int x){
	// write code here
	int out=0,r;

	while(x!=0){
		r = x % 10;
		out = out*10 + r;
		x = x /10;
	}

	return out;

}

int main(){
	int out;
	int in =120;
	out = reverse(in);
	printf("\n%d\n", out);
	return 0;
}