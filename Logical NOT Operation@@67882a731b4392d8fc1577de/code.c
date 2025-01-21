#include <stdio.h>

void fun(){
    int a;
    scanf("%d",&a);
    if(!a>=0){
        printf("True");
    }else{
        printf("False");
    }
}
int main(){
    fun();
    return 0;
}