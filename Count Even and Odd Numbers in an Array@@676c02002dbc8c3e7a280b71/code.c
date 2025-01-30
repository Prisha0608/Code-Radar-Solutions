#include <stdio.h>

int main(){
    int n,o,e;
    scanf("%d",&n);
    int s[n];
    for(int j=0;j<n;j++){
        scanf("%d",&s[j]);
    }
    o=0;
    e=0;
    for(int i=0;i<n;i++){
       if(s[i]%2==0){
        e++;
       }else{
        o++;
       }
    }
    printf("%d %d",e,o);
    return 0;
}