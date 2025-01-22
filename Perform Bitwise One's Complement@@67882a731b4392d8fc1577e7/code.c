#include <stdio.h>

void fun(){
    int a,b;
    scanf("%d",&a);
    b=~a;
    printf("%d",b);
}
int main(){
    fun();
    return 0;
}