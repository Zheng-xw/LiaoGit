#include<stdio.h>
int main(){
	int n,i,flag;
	flag=1;
	scanf("%d",&n);
	for(i=2;i<=n-1;i++){
		if(n%i==0){
//			printf("%d不是素数\n",n);
//			break;

			flag=2;
		}
	}
	
//	printf("%d是素数\n",n);
	
	if(flag==2){
		printf("%d不是素数\n",n);
	}
	else{
		printf("%d是素数\n",n);
	}
	
} 
