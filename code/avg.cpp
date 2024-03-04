#include<stdio.h>
int main(){
	int a[10],num,i,sum;
	num=sum=0;
	float avg;
	avg=0;
	
	for(i=0;i<=9;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/10.0;
	
	for(i=0;i<=9;i++){
		if(a[i]<avg){
			num++;
		}
	}
	
	printf("avg=%f\n",avg);
	printf("num=%d\n",num);
	
	
}
