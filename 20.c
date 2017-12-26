#include<stdio.h>

int main(){
	float sum=0,h=100;
	
	for(int i=1;i<=10;i++){
		sum+=h;
		h=h/2;
		sum+=h;
	}	
	printf("%f %f",sum-h,h);
	
}