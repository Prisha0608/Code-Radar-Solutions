#include <stdio.h>

void fun(){
    int a;
    float area;
    scanf("%d",&a);
    area=3.14*a*a;
    printf("%.2f",area);

}
int main(){
    fun();
    return 0;
}