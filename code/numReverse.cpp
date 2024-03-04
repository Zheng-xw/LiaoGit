/*** 
 * @Author: ZXW
 * @Date: 2024-02-23 11:46:28
 * @LastEditors: ZXW
 * @LastEditTime: 2024-02-23 11:48:59
 * @FilePath: \DATA\2024\Feb\numReverse.cpp
 */
#include<stdio.h>
int main(){
    // printf("HelloWorld!\n");

    int a,a1;
    a1=0;
//    a=123;
    scanf("%d",&a);
    while (a!=0)
    {
        a1=a1*10+a%10;
        a/=10;
        /* code */
    }
    printf("%d",a1);
    

}
