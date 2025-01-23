#include <stdio.h>

int main(){
    int a,p;
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
        p=a*i;
        printf("2 x %d = %d\n",i,p);
    }return 0;
}