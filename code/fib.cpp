#include<stdio.h>

int fib(int a){
	if(a==0||a==1){
		return 1;
	}
	else
	return fib(a-1)+fib(a-2);
}


int main(){
	int a[10],i,rat;
	a[0]=a[1]=1;
	scanf("%d",&rat);
	i=fib(rat);
	printf("%d\n",i);
//	if(rat==1||rat==2){
//		printf("%d\n",a[0]);
//	}
//	else{
//		for(i=2;i<10;i++){
//			a[i]=a[i-1]+a[i-2];
//		}
//		printf("%d\n",a[rat-1]);
//	}
}
