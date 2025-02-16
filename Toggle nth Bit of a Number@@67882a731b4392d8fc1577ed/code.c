#include<stdio.h>
int main(){
   int n,t,p;
   scanf("%d %d",&n,&t);
   p=1<<t^n;
   printf("%d",p); 
}