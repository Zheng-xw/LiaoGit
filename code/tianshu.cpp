#include<stdio.h>
int main(){
	int year,month,day,sum,i;
	sum=0;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&year,&month,&day);
	if((year%400==0)||((year%4==0)&&(year%100!=0))){
		a[1]=29;
	}
	
	for(i=0;i<month-1;i++){
		sum=sum+a[i];
	}
	sum+=day;
	printf("%d\n",sum);
}
