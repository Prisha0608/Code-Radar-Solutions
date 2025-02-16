#include<stdio.h>
int main(){
    int n,e,i;
    scanf("%d",&n);
    i=0;
    while(n>0){
        e=n%2;
        if(e==0){
            i++;
        }
    }
    printf("%d",i);
}
