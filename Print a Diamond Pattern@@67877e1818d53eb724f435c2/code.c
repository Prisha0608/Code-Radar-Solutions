#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=i;j<=a-1;j++){
            printf(" ");
        }
        for(int j=i;j<=i*3;j++){
            printf("*");
        }printf("\n");
    }
    for(int i=a-2;i>=0;i--){
        for(int j=0;j<=a-i-2;j++){
            printf(" ");
        }
        for(int j=i;j<=i*3;j++){
            printf("*");
        }printf("\n");
    }return 0;
}