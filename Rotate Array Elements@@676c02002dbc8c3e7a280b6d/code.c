#include <stdio.h>

int main(){
    int n,a,s[a],b,p;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        scanf("%d\n",&b);
        s[i]=b;
    }
    scanf("%d",&p);
    for(int j=n-p;j<n;j++){
        printf("%d\n",s[j]);
    }
    for(int k=0;k<n-p;k++){
        printf("%d\n",s[k]);
    }
    return 0;
    
}