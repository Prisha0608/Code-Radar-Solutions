#include <stdio.h>

void fun(){
    float a;
    scanf("%f",&a);
    printf("You entered: %.2f",a);
}
int main(){
    fun();
    return 0;
}