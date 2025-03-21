#include <stdio.h>
int main(){
    int n,p,l;
    
    scanf("%d",&n);
    l=n/2;
    int s[n];
    for(int m=0;m<n;m++){
        scanf("%d ",&s[m]);
    }
    for(int i=0;i<n-1;i++){
        p=1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                p++;
                
                
            }
        }
        if(p>=l){
            printf("%d",s[i]);
            return 0;
        }
    }
    printf("-1");
    
}