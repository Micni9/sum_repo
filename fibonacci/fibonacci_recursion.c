#include "stdio.h"

int f(int n){
	if(n<=1)
		return 1;
	return f(n-1)+f(n-2);
}

int main(){
	printf("Input a nonnegative integer: ");
	int N;
	scanf("%d",&N);
	printf("The %dth fibonacci number is: %d.\n",N,f(N));
	return 0;

