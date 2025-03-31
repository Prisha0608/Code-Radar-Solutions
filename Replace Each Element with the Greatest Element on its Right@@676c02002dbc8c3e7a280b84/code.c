#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int i=0;i<n-2;i++){
        int max=s[i+1];
        for(int j=i+1;j<n;j++){
            if(s[j]>max){
                max=s[j];
            }
        }
        s[i]=max;

    }
    s[n-1]=-1;
    for(int k=0;k<n;k++){
        printf("%d ",s[k]);
    }
}