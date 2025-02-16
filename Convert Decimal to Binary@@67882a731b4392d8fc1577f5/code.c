#include<stdio.h>
int main(){
    int n,a[1000],i;
    scanf("%d",&n);
    i=0;
    while(n>0){
        a[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
}