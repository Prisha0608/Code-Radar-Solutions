#include <stdio.h>

void fun(){
    int a,b,c;
    float av;
    scanf("%d %d %d",&a,&b,&c);
    av=(a+b+c)/3;
    printf("Average: %.2f",av);
}
int main(){
    fun();
    return 0;
}