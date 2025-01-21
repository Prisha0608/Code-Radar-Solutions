#include <stdio.h>

void fun(){
    int a;
    scanf("%d",&a);
    printf("Hexadecimal: %x\n",a);
    printf("Octal: %o",a);

}
int main(){
    fun();
    return 0;
}