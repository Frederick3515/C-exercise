#include <stdio.h>

int main(){
	
	int a,n;
	int sum=0;
	scanf("%d %d",&a,&n);
	
	for(int i=1;i<=n;i++){
		int tsum=0;
		for(int j=1;j<=i;j++){
			tsum*=10;
			tsum+=1; 
		}
		sum+=tsum;
	}
	printf("%d",sum*a);
	
	
}