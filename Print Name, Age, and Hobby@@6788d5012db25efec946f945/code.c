#include <stdio.h>

void fun(){
    char a[100];
    int b;
    char c[100];
    scanf("%s %d\n",&a,&b);
    scanf("%s",&c);
    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s",c);
}
int main(){
    fun();
    return 0;
}