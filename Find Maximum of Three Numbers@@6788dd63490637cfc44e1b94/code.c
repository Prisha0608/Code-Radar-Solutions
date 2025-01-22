#include <stdio.h>

void fun(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&b);
    if(a>b && a>c){
        printf("%d",a);
    }else if(b>c && b>a){
        printf("%d",b);
    }else{
        printf("%d",c);
    }
    
}
int main(){
    fun();
    return 0;
}