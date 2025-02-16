#include<stdio.h>
int main(){
    int n,i,t;
    scanf("%d %d",&n,&t);
    i=(1<<t)|n;
    printf("%d",i);

}