#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    int smallest=s[0],s_s=-1;
    if(n<2){
        printf("-1");
        return 0;
    }
    for(int i=0;i<n;i++){
        if(s[i]<smallest){
            s_s=smallest;
            smallest=s[i];
        }else if(s[i]<s_s && s[i]!=smallest){
            s_s=s[i];
        }
    }
    if(s_s==-1){
        printf("-1");
    }else{
        printf("%d",s_s);
    }
}