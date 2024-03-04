#include<stdio.h>
int main(){
	
	int a[5],i,sum,num;
	sum=0,num=0;
	float avg;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=sum/5;
	for(i=0;i<5;i++ ){
		if(a[i]<avg){
			num++;
		}
	}
	printf("%d\n",num);
}
