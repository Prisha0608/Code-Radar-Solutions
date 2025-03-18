#include<stdio.h>
int main(){
    int n,p,max_p;
    
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    p=0;
    max_p=s[0]*s[1];
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            p=s[i]*s[j];
            if(p>max_p){
                max_p=p;
            }

        }
    }
    printf("%d",max_p);
}