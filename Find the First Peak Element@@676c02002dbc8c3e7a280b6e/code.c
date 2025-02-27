#include <stdio.h>

int main(){
    int n,p;
    scanf("%d\n",&n);
    int s[n];
    for(int j=0;j<n;j++){
        scanf("%d\n",&s[j]);
    }
    if(n<3){
        printf("%d",s[n-1]);
        return 0;
    }
     p=0;
    for(int i=1;i<n-1;i++){
         if(s[i-1]<s[i] && s[i+1]<s[i]){
            p=s[i];
            break;
         }

    }

    printf("%d",p);
    return 0;
}