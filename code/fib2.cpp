#include<stdio.h>
int main(){
	int a[5],n,i;
	a[0]=a[1]=1;
	scanf("%d",&n);
//	for(i=2;i<n;i++){
//		a[n-1]=a[n-2]+a[n-3];
//	}

	if(n==1||n==2){
		printf("%d\n",1);
		return 0;
	}
	
	for(i=3;i<=n;i++){
		a[i-1]=a[i-2]+a[i-3];
//		printf("%d\n",a[i-1]);
	}
	printf("%d\n",a[n-1]);
}
