#include<stdio.h>
int main(){
   int n,t;
   scanf("%d %d",&n,&t);
   p=(1<<t)|n;
   printf("%d",p); 
}