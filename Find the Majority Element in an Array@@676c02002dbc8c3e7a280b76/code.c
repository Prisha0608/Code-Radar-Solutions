#include <stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        p=0;
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                p++;
                if(p>n/2){
                    printf("%d",s[i]);
                }
                
            }
        }
    }
    printf("-1");
    
}