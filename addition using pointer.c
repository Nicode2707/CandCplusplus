#include<stdio.h>

int sum(int *a,int *b){
	int sum= *a+*b;
	return sum;
}

int main(){
	int x=3;
	int y=4;
	printf("sum of x and y is %d",sum(3,4));
	return 0;
}
