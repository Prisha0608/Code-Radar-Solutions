#include <stdio.h>

int main(){
    int n,a,s[a],b;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&b);
        s[i]=b;
    }
    if(s[0]<s[n-1]){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}