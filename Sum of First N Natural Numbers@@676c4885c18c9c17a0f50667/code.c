#include <stdio.h>

int main(){
    int a,p;
    p=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
       p=p+i;
    }printf("%d",p);
    return 0;
}