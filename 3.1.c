#include<stdio.h>
#include<math.h> 

int main(){
	
	for(int i=1;;i--){
		if((sqrt(i+100)==(int)sqrt(i+100))&&(sqrt(i+268)==(int)sqrt(i+268))){
			printf("%d\n",i);
		}
	}
	
}