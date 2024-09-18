#include<iostream>

using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a>b){
		if(a>c){
			cout<<"a is greater than b and c";
		}	
		else{
			cout<<"c is greter than a and c";
		}	
		
	}
	else{
		if(b>c){
			cout<<"b is greter than a and c";
		}
		else{
			cout<<"c is greter than a and c";
		}	
}
	return 0; 
}
