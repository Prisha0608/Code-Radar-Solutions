#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s[n];
    int p[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    int k=0;
    for(int j=n-1;j>=0;j--){
       p[k]=s[j];
       k++;
    }
    for(int l=0;l<n;l++){
        if(s[l]!=p[l]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");

}