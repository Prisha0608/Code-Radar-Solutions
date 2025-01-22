#include <stdio.h>

void fun(){
    int a,b,c;
    float av,sum;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    av=sum/3;
    printf("Average: %.2f",av);
}
int main(){
    fun();
    return 0;
}