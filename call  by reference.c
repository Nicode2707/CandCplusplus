#include<stdio.h>

void swap(int *a,int *b);

int main(){
	int x=3,y=4;
	printf("swap of two number before swapping is %d and %d",x,y);
	swap(&x,&y);
	printf("swap of two number after swapping is %d and %d",x,y);
	return 0;
}

void swap(int *a,int *b){

int temp;
temp = *a;
*a = *b;
*b = temp;


}
