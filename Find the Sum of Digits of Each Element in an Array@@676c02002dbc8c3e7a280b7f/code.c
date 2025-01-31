#include <stdio.h>

int main(){
    int n,e,p;
    
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int j=0;j<n;j++){
        p=0;
        if(s[j]==0){
            p=0;
        }else{

        
        while(s[j]>0){
           e=s[j]%10;
           p=p+e;
           s[j]/=10;
        }}

        printf("%d ",p);
    }
    return 0;
}