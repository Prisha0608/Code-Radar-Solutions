#include <stdio.h>

void fun(){
    float a,b,p;
    scanf("%f %f",&a,&b);
    p=a*b;
    printf("Product: %.2f",p);
}
int main(){
    fun();
    return 0;
}