#include<stdio.h>

int main(){
	int count=0;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			for(int k=1;k<=4;k++){
				if(i==k||i==j||k==j){
					
				}else{
					printf("%d%d%d\n",i,j,k);
					count++;
				}
			}
		}
	}
	printf("��%d��",count);
}

 