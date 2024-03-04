#include<stdio.h>
int main()
{
	int n,ge,shi,bai;
	scanf("%d",&n);
	for(n=100;n<=999;n++)
	{
		ge=n%10;
		bai=n/100;
		shi=(n-ge-bai*100)/10;
		if(ge*ge*ge+shi*shi*shi+bai*bai*bai==n)
		{
			printf("%d\n",n);
	}
	}
}
