#include <stdio.h>

int main(){
    int n,a,s[a],b;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        s[i]=b;
    }
    for(int j=0;j<n;j++){
        for(int k=j;k<n;k++){
            if(s[j]<=s[k]){
               printf("Not Sorted");
               return 0;
            }
        }
    }
    printf("Sorted");
    return 0;
}