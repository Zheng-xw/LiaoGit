#include<stdio.h>
int main(){
	int n,i;
	i=0;
	scanf("%d",&n);
//	for(i=0;n!=0;i++){
//		n=n/10;
//	}

	while(n>0){
		n/=10;
		i++;
	}
	printf("%d\n",i);
} 
