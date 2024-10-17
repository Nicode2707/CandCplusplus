#include<stdio.h>

float celsiustofarenhite(int celsius);

int main(){
	int celsius;
	printf(" enter the  temperature celsius" );
	scanf("%d",&celsius);
	printf("celsius to farenhite is %f",celsiustofarenhite(celsius));
	return 0;
}

float celsiustofarenhite(int celsius){
	float result;
	result = (celsius*9/5)+32;
	return result;
}
