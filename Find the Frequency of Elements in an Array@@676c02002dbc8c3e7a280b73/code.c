#include <stdio.h>
int main(){
    int n,k;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int l=0;l<n;l++){
        k=0;
        for(int j=l+1;j<n;j++){
            if(s[l]==s[j]){
                k++;
            }
        }
        printf("%d %d",l,k);
    }
}