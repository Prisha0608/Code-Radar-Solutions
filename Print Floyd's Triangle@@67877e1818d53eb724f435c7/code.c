#include <stdio.h>

int main(){
    int a,p;
    p=1;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",p);
            p++;
        }printf("\n");
    }return 0;
}