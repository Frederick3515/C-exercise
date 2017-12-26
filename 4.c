#include<stdio.h>

int isleap(int year){
	if((year%4==0&&year%100!=0)||year%400==0){
		return 1;
	}else{
		return 0;
	}
} 



int main(){

	int year,month,day,days=0;
	int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("输入日期 格式2017/08/19\n");
	scanf("%d/%d/%d",&year,&month,&day);
	if(month==1){
		days=day;
	}else if(month==2){
		days=months[1]+day;
	}else {
		for(int i=1;i<month;i++){
			days+=months[i-1];
		}
		days+=day;
		if(isleap(year)){
			days++;
		}
	}
	printf("%d",days);
	
	
	
	
}

