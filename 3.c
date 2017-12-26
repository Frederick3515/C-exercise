#include<stdio.h>

int main(){

	for(int i=0;;i--){
		int flag1=0,flag2=0;
		for(int j=0;j*j<=i+100;j++){
			if(j*j==i+100){
				flag1=1;
				break;
			}
		}
		for(int k=0;k*k<=i+268;k++){
			if(k*k==i+268){
				flag2=1;
				break;
			}
		}
		if(flag1&&flag2){
			printf("%d\n",i);
		}
	}
	
}

 