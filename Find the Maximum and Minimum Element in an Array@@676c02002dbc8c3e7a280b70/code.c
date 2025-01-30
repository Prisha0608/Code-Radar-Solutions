#include <stdio.h>

int main(){
    int n,min,max;
    scanf("%d\n",&n);
    int s[n];
    for(int k=0;k<n;k++){
        scanf("%d ",s[k]);
    }
    min=s[0];
    max=s[0];
    for(int i=0;i<n;i++){
        if(s[i]<min){
            min=s[i];
        }
    }
    for(int j=0;j<n;j++){
        if(s[j]>max){
           max=s[j]; 
        }
    }
    printf("%d %d",min,max);
    return 0;

}