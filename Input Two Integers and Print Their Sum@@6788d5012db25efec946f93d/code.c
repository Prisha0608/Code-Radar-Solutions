#include <stdio.h>

void fun(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("Sum: %d",sum);
}
int main(){
    fun();
    return 0;
}