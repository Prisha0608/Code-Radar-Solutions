#include <stdio.h>

void fun(){
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("Positive");
    }else if(a<0){
        printf("Negative");
    }else{
        printf("Zero");
    }
}
int main(){
    fun();
    return 0;
}