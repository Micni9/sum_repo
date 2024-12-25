#include "stdio.h"

int main(){
	printf("Input N:");
	int N;
	scanf("%d",&N);
	int i;
	int f0 = 1;
	int f1 = 1;
	int sum = 0;
	for(i=1;i<=N;i++){
		sum+=f1;
		int temp = f1+f0;
		f0 = f1;
		f1 = temp;
	}
	printf("The sum of fibonacci number until f(%d)=%d is:\n%d\n",N,f0,sum);
	return 0;
}
