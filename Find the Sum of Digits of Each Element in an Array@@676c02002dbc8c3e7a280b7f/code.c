#include <stdio.h>

int main(){
    int n,e,p;
    p=0;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int j=0;j<n;j++){
        while(s[i]>0){
           e=s[i]%10;
           p=p+e;
           s[i]/10;
        }
        printf("%d ",p);
    }
    return 0;
}