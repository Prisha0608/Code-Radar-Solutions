#include <stdio.h>

void fun(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b){
        printf("%d",a);
    }else{
        printf("%d",b);
    }
}
int main(){
    fun();
    return 0;
}