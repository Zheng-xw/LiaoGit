#include<stdio.h>
int main(){
//	int i,ge,shi,bai;
//	i=100;
//	while(i<1000){
//		//����� ʮ ��λ��
//		ge=i%10;
//		bai=i/100;
//		shi=(i-bai*100-ge)/10;
//		if((ge*ge*ge+shi*shi*shi+bai*bai*bai)==i){
//			printf("%d\n",i);
//		}
//		i++; 
//	}

	int i,j,k;
	for(i=0;i<100;i++){				//���� 
		for(j=0;j<100;j++){			//ĸ�� 
			k=100-i-j;				//С�� 
			if((k%3==0)&&((k/3)+5*i+3*j)==100){
				printf("%d %d %d\n",i,j,k);
			}
			
		}
	}



}
