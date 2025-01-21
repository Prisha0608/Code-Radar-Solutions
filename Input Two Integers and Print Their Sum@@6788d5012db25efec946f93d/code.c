#include <stdio.h>

void fun(){
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum: %d",sum);
}
int main(){
    fun();
    return 0;
}