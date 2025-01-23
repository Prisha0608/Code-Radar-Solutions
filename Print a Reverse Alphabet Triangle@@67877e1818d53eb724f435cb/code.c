#include <stdio.h>

int main(){
    int a;
    char p;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        p='A';
        for(int j=i;j<a;j++){
            printf("%c ",p);
            p++;
        }printf("\n");
    }return 0;
}