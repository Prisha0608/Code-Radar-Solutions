#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    for(int i=0;i<2;i++){
        for(int j=1;j<n-i;j++){
            if(s[j]<s[j-1]){
                int temp=s[j];
                s[j]=s[j-1];
                s[j-1]=temp;
            }
        }
    }
    printf("%d",s[n-2]);
}