#include <stdio.h>

void fun(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z' || a>='A' && a<='Z'){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' ||a=='I' || a=='O' || a=='U'){
            printf("Vowel");
        }else{
            printf("Consonant");
        }
    }else{
        if(-100<=a && a<=100){
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