#include <stdio.h>

void fun(){
    int a,b;
    scanf("%d %d",&a,&b);
    a<<b;
    printf("%u",a);

}
int main(){
    fun();
    return 0;
}