#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    for(int j=0;j<n;j++){
        scanf("%d",&s[j]);
    }
    int i=0;
    while(i<n){
        int correct=s[i]-1;
        if(s[i]!=s[correct]){
            int temp=s[i];
            s[i]=s[correct];
            s[correct]=temp;
        }else{
            i++;
        }
    }
    for(int k=0;k<n;k++){
        if(s[k]!=k+1){
            printf("%d",k);
            return 0;
        }
    }
    printf("%d",s[n-1]+1);
}