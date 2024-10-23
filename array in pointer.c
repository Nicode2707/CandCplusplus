#include<stdio.h>
int main(){
	int arr[10];
	int *ptr=&arr;
	ptr = ptr+2;
	if(ptr==&arr[2]){
		printf("these point to same memory location\n");
	}
	else{
			printf("these point do not same memory location\n");
	}
	return 0;
}

