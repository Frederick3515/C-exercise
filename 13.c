#include<stdio.h>

int main(){
	
	int b,s,g,t;
	
	for(int i=100;i<=999;i++){
		b=i/100;
		s=(i%100)/10;
		g=i%10;
		if(b*b*b+s*s*s+g*g*g==i){
			printf("%d\n",i);
		}
	}
	
	
}


