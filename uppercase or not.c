//program to determine whether a character entered by the user is uppercase or not 
#include<stdio.h>
int main(){
	//60-90 = A-Z
	char ch;
	printf("enter the character\n ");
	scanf("%c",&ch);
	if(ch<=90 && ch>=60){
		printf("it is uppercase");
	}
	else{
		printf("it is not uppercase");
	}
	return 0;
}
