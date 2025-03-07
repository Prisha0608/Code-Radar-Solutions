#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int k=0;k<n;k++){
        for(int j=1;j<n-k;j++){
            if(s[j]<s[j-1]){
                int temp=s[j];
                s[j]=s[j-1];
                s[j-1]=temp;
            }
        }
    }
    for(int p=0;p<n-1;p++){
        if(s[p]==s[p+1]){
            printf("%d",s[p]);
            return 0;
        }
    }
    printf("-1");
}