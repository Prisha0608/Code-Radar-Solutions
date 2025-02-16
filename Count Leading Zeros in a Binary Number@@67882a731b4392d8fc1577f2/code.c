#include<stdio.h>
int main(){
    int n,e,i,p;
    scanf("%d",&n);
    i=0;
    while(n>0){
        i++;
        n=n/2;
    }
    p=32-i;
    printf("%d",p);
}