#include<stdio.h>
int main(){
    int n,e,i;
    scanf("%d",&n);
    i=0;
    while(n>0){
        i++;
        n=n/2;
    }
    printf("%d",32-i);
}