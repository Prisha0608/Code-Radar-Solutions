#include <stdio.h>

int main(){
    int n;
    scanf("%d\n",&n);
    int s[n];
    if(n<3){
        printf("-1");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d\n",&s[i]);
    }
    for(int j=1;j<=n;j++){
        if(s[j-1]>=s[j] ){
            printf("%d",s[j-1]);
            return 0;
        }
    }
    printf("-1");
    return 0;
}