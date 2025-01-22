#include <stdio.h>

void fun(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%u",a>>b);
}
int main(){
    fun();
    return 0;
}