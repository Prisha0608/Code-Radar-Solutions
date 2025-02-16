#include<stdio.h>
int main(){
    int a,b,e[100],c;
    scanf("%d %d",&a,&b);
    c=0;
    while(a>0){
        e[c]=a%2;
        a=a/2;
        c++;
    }
    if(e[b]==1){
        printf("1");
    }else{
        printf("0");
    }
}