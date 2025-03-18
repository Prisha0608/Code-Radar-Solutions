#include<stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    p=0;
    for(int j=0;j<n;j++){
        int flag=1;
        if(s[j]<1){
            continue;
        }
        for(int k=2;k<s[j];k++){
            if(s[j]%k==0 ){
                flag=0;
                break;
            }
        }
        if(flag==1 ){
            p++;
        }
    }
    printf("%d",p);
}