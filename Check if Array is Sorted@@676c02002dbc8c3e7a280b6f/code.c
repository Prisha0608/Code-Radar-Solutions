#include <stdio.h>

int main(){
    int n,b;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        s[i]=b;
    }
    for(int j=0;j<n-1;j++){
        if(s[j+1]<s[j]){
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
    return 0;
}