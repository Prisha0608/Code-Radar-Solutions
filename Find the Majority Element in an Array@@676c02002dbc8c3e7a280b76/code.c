#include <stdio.h>
int main(){
    int n,p,l;
    l=n/2;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        p=1;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                p++;
                if(p>l){
                    printf("%d",s[i]);
                }
                
            }
        }
    }
    printf("-1");
    
}