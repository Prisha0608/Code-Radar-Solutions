#include <stdio.h>

int main(){
    int n,b;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        s[i]=b;
    }
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(s[j]<=s[k]){
               printf("Not Sorted");
               return 0;
            }
        }
    }
    printf("Sorted");
    return 0;
}