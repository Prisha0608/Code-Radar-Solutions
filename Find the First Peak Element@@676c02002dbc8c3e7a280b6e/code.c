#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int j=0;j<n-1;j++){
        if(s[j-1]<s[j] && s[j+1]<s[j]){
            printf("%d",s[j]);
            return 0;
        }
    }
    return -1;
}