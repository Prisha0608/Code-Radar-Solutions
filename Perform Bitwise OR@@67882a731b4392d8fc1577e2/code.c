#include <stdio.h>

void fun(){
    int a,b,p;
    scanf("%d %d",&a,&b);
    p=a|b;
    printf("%d",p);

}
int main(){
    fun();
    return 0;
}