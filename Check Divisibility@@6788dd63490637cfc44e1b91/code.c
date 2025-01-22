#include <stdio.h>

void fun(){
    int a;
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("Divisible");
    }else{
        printf("Not Divisible");
    }
}
int main(){
    fun();
    return 0;
}