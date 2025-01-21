#include <stdio.h>

 void fun(){
    double a;
    scanf("%lf",&a);
    printf("You entered: %.4lf",a);
 }
 int main(){
    fun();
    return 0;
 }