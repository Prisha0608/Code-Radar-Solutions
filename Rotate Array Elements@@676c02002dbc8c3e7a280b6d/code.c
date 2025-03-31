#include <stdio.h>

int main(){
    int n,p,b;
    scanf("%d\n",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&b);
        s[i]=b;
    }
    scanf("%d",&p);
    p=p%n;
    for(int i=0;i<p;i++){
        int last=s[n-1];
        for(int j=n-1;j>0;j--){
            s[j]=s[j-1];
        }
        s[0]=last;
    }
    for(int k=0;k<n;k++){
        printf("%d\n",s[k]);
    }
    
}