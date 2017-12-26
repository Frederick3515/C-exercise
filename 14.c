#include<stdio.h>
#include<math.h>

int isPrime(int n){
	int flag=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=0;
		}
	}
	return flag;
}

int decompose(int n){
	int t;
	for(int i=2;i<=n;i++){
		if(isPrime(i)&&(n%i==0)){
			
			if(n/i==1){
				printf("%d",i);	
			}else{
				printf("%d*",i);
				decompose(n/i);
				break;
			}
			
		}
	}
	
}


int main(){
	int n;
	scanf("%d",&n);
	
	decompose(n);
	
}