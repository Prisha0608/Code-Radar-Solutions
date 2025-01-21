#include <stdio.h>

void fun(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("False");
    }else{
        printf("True");
    }
}
int main(){
    fun();
    return 0;
}