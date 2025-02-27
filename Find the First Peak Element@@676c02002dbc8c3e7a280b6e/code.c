#include <stdio.h>

int main(){
    int n,p;
    scanf("%d\n",&n);
    int s[n];
    if(n<3){
        printf("%d",s[n-1]);
        return 0;
    }
    int p=s[0];
    for(int i=1;i<n-1;i++){
         if(s[i+1]<s[i]){
            p=s[i];
         }

    }

    printf("%d",p);
    return 0;
}