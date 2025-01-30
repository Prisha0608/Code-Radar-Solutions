#include <stdio.h>

int main(){
    int n,min,max;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d",s[i]);
    }
    min=s[0];
    max=s[0];
    for(int i=0;i<n;i++){
        if(s[i]<min){
            min=s[i];
        }
    }
    for(int j=0;j<n;j++){
        if(s[i]>max){
           max=s[i]; 
        }
    }
    printf("%d %d",min,max);
    return 0;

}