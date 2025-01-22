#include <stdio.h>

void fun(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }else{
        printf("Negative");
    }
}
int main(){
    fun();
    return 0;
}