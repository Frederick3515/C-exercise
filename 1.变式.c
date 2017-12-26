#include<stdio.h>


int main(){
	
	int k,n;
	int a[9][2];
	scanf("%d %d",&k,&n);
	for(int i=0;i<=k-1;i++){
		scanf("%d",&a[i][1]);
		a[i][2]=0;
	}
	for(int i=1;i<=n;i++){
		a[i-1][2]=1;
		 
	} 
}