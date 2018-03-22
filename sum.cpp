#include<stdio.h>

int sum(int a, int b){
	return a+b;
}

int main(){
	int a =5, b=10;
	int res = sum(a,b);
	printf("Sum = %d\n",res);
	return 0;
}

