#include<stdio.h>
int main(){
    int a,b,s;
    scanf("%d %d",&a,&b);
    s=a^b;
    a=a^s;
    b=b^s;
    printf("%d %d",a,b);
}