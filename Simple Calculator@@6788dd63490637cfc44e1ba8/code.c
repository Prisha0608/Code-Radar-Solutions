#include <stdio.h>

int main(){
    float  a,b,p;
    char c;
    scanf("%f %f",&a,&b);
    scanf("%c",&c);
    if(c=='+'){
        p=int(a+b);
        
        printf("%d",p);
    }else if(c=='-'){
        p=int(a-b);
        
        printf("%d",p);
    }else if(c=='*'){
        p=int(a*b);
        
        printf("%d",p);
    }else if(c=='/'){
        p=int(a/b);
        
        printf("%d",p);
    }else{
        printf("error");
    }return 0;
}