#include<stdio.h>
int main(){
    int n,smallest,s_s;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    
    if(n<2){
        printf("-1");
        return 0;
    }
    if (s[0] < s[1]) {
        smallest = s[0];
        s_s = s[1];
    } else {
        smallest = s[1];
        s_s = s[0];
    }
    for(int i=0;i<n;i++){
        if(s[i]<smallest){
            s_s=smallest;
            smallest=s[i];
        }else if(s[i]<s_s && s[i]!=smallest){
            s_s=s[i];
        }
    }
    
        printf("%d",s_s);
    
}