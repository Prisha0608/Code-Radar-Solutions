#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=i;j<a;j++){
            printf(" ");
        }
        for(int j=i;j<=i*3;j++){
            printf("*");
        }printf("\n");
    }return 0;
}