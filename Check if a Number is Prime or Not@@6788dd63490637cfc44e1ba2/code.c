#include <stdio.h>

int main(){
    int a,i;
    scanf("%d",&a);
    for( i=2;i<a;i++){
        if(a%i==0){
            printf("Not Prime");
            return ;
        }
    }
    printf("Prime");
    return 0;
}