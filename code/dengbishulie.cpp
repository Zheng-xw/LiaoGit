#include<stdio.h>
int main(){
	int i,n,ans;
	ans=1;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		ans*=2;
	}
	
	printf("%d\n",ans);
}
