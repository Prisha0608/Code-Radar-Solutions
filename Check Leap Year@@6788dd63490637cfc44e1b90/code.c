#include <stdio.h>

void fun(){
    int a;
    scanf("%d",&a);
    if((a%4==0 && a%100!=0) && (a%400==0)){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
}
int main(){
    fun();
    return 0;
}