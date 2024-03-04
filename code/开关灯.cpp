#include<stdio.h>
int main(){
	int n,m,a[5000];
	for(int i=0;i<5000;i++){
		a[i]=1;
	}
//	a[50]={1};//1ÁÁ    -1Ãð
	scanf("%d %d",&n,&m);

//	m=10,n=10;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j%i==0){
				a[j]=(-1)*a[j];
			}
		}
//		printf("µÚ%d´Î¹ØµÆ\n",i);		
	} 
	
	for(int i=1;i<=n;i++){
		printf("µÚ%d´ÎÅÐ¶ÏµÆ×´Ì¬\n",i);
		if(a[i]==-1){
			printf("%d,",i);
		}
	}

//	int a[5]=1;
////	a[5]={0,0,0,0,0};
//	for(int i=0;i<5;i++){
//		printf("%d ",a[i]);
//	}
	
}
