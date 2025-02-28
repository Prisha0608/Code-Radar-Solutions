#include <stdio.h>
int main(){
    int n,k;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&s[i]);
    }
    for(int i=0;i<n;i++){
        k=0;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                k++;
            }
        }
        printf("%d %d",i,k);
    }
}