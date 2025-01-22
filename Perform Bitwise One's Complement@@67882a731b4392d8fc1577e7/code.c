#include <stdio.h>

void fun(){
    int a;
    scanf("%d",&a);
    printf("%u",~a);
}
int main(){
    fun();
    return 0;
}