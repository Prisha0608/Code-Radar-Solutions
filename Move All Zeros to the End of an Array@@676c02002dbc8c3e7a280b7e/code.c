#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    for(int k=0;k<n;k++){
        scanf("%d",&s[k]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(s[i]==0 && s[j]!=0){
             int temp=s[i];
             s[i]=s[j];
             s[j]=temp;
            }break;
        }
    }
    for(int o=0;o<n;o++){
        printf("%d ",s[o]);
    }
}