#include<stdio.h>
int main(){
    int n,a[100],i;
    scanf("%d",&n);
    i=0;
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=0;j<i;j++){
        if(a[j]==0){
            printf("%d",j);
            break;
        }
    }
}