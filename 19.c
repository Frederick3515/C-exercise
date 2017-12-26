#include <stdio.h>

int main(){
	
	for(int i=1;i<=10000;i++){
		int sum=0;
		for(int j=1;j<=i-1;j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if(sum==i){
			printf("%d=",i);
			for(int j=1;j<=i;j++){
				if(i%j==0){
					if(i/j==1){
						printf("%d\n",j);
					}else{
						printf("%d+",j);
					}
					
				
				}
			}
		}
	}
	
}