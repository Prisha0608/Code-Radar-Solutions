#include <stdio.h>

void fun(){
    float a;
    float area;
    scanf("%f",&a);
    area=3.14*a*a;
    printf("Area: %.2f",area);

}
int main(){
    fun();
    return 0;
}