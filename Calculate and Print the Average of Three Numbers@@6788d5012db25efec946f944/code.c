#include <stdio.h>

void fun(){
    int a,b,c,av;
    scanf("%d %d %d",&a,&b,&c);
    av=(a+b+c)/3;
    printf("%d",av);
}
int main(){
    fun();
    return 0;
}