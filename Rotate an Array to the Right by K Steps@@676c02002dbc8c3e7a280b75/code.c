#include<stdio.h>
int main(){
    int n,shift;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    scanf("%d",&shift);
    shift=shift%n;
    for(int i=0;i<shift;i++){
        int last=s[n-1];
        for(int j=n-1;j>0;j--){
            s[j]=s[j-1];
        }
        s[0]=last;
    }
    for(int k=0;k<n;k++){
        printf("%d ",s[k]);
    }
}