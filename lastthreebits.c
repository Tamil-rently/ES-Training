#include<stdio.h>
#include<string.h>
long dtob(int a){
    int re,bin=0;
    int temp=1;
    while(a!=0){
        re=a%2;
        a/=2;
        bin+=temp*re;
        temp*=10;

    }
    //printf("%d",bin);
    return bin;
}
/*
int main(){
   int a,b,n=3,t=1,re,k=1;
   while(n!=0){
       re+=1*k;
       k*=10;
       n--;
   }

   a=0b01010;
   b=(a>>3)&n;
    printf("%ld",dtob(b));

} 
*/
int main(){
int num,n;
printf("Enter number and count of bits");
scanf("%d %d",&num,&n);
int x=(num)&(1<<n-1);
printf("%d",x);

}  
