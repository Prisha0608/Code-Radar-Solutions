#include <stdio.h>

void fun(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else{
        if(a>=1 && a<100){
            printf("Digit");
        }else{
            printf("Special Character");
        }
    }
}
int main(){
    fun();
    return 0;
}