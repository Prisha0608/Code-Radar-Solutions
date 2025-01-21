#include <stdio.h>

void fun(){
    int a,b;
    scanf("%d %d",&a,&b);
    if((a>0 && b<0) || (a==0 && b==0)){
        printf("True");
    }else{
        printf("False");
    }
}
int main(){
    fun();
    return 0;
}