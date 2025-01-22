#include <stdio.h>

void fun(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("Lowercase");
    }else if(a>='A' && a<='Z'){
        printf("Uppercase");
    }else{
        printf("Not an alphabet");
    }
}
int main(){
    fun();
    return 0;
}