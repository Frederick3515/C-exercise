#include <stdio.h>
#define max(A,B) A<=B?B:A
#define min(A,B) A<=B?A:B

int main(){
	int a,b;
	scanf("%d %d",&a,&b); 
	
	for(int i=min(a,b);i>=1;i--){
		if(a%i==0&&b%i==0){
			printf("���Լ��Ϊ %d\n",i);
			break;
		}
	}
	for(int i=max(a,b);;i++){
		if(i%a==0&&i%b==0){
			printf("��С������Ϊ %d\n",i);
			break;
		}
	}
}