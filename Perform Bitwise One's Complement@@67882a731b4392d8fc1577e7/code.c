#include <stdio.h>

void fun(){
    int a,b;
    scanf("%d",&a);
    b=~a;
    printf("%u",~a);
}
int main(){
    fun();
    return 0;
}