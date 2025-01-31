#include <stdio.h>

int main(){
    int n,t;
    scanf("%d",&n);
    int s[i];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&t);
    for(int i=0;i<n;i++){
       if(s[i]==t){
        printf("%d",i);
        return 0;
       }
    }
    return 0;
}