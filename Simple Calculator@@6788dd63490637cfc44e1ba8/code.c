#include <stdio.h>

int main(){
    int  a,b,p;
    
    char c;
    scanf("%f %f",&a,&b);
    scanf("%c",&c);
    if(c=='+'){
        p=a+b;
        
        printf("%d",p);
    }else if(c=='-'){
        p=a-b;
        
        printf("%d",p);
    }else if(c=='*'){
        p=a*b;
        
        printf("%d",p);
    }else if(c=='/'){
        p=a/b;
        
        printf("%d",p);
    }else{
        printf("error");
    }return 0;
}