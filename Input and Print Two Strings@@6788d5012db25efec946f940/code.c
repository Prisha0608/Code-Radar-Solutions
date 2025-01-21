#include <stdio.h>

void fun(){
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    printf("You entered:%s and %s",a,b);
}
int main(){
    fun();
    return 0;
}