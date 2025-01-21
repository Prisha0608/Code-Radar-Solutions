#include <stdio.h>

void fun(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<=b){
        printf("True");
    }else{
        printf("False");
    }
}
int main(){
    fun();
    return 0;
}