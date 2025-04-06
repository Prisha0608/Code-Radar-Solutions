#include <math.h>
int totalLikes(int n){
    int t=5;
    int d=0;
    int m=0;
    if(n==1){
        return floor(t/2);
    }else if(n==0){
        return 0;
    }
    for(int i=1;i<=n;i++){
        d=floor(t/2);
        m+=d;
        t=d*3;
    }
    return m;
}