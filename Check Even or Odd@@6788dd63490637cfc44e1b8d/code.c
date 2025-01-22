#include <stdio.h>

void fun(){
    int a;
    scanf("%d",&a);
    if(a%2==0){
        printf("Even");
    }else{
        printf("Odd");
    }
}
int main(){
    fun();
    return 0;
}