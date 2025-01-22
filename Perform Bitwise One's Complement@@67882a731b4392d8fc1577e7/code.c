#include <stdio.h>

void fun(){
    int a;
    scanf("%d",&a);
    printf("%u",a~1);
}
int main(){
    fun();
    return 0;
}