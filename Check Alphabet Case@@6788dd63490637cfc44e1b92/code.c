#include <stdio.h>

void fun(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("Lowercase");
    }else{
        printf("Uppercase");
    }
}
int main(){
    fun();
    return 0;
}