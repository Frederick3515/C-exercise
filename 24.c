#include<stdio.h>

int main(){
	
	double a=1,b=1,c=0;
	double sum=0;
 	for(int i=1;i<=20;i++){
 		c=a+b;
 		a=b;
 		b=c;
 		sum+=b/a;
 	}
 	printf("%lf",sum);
	
}