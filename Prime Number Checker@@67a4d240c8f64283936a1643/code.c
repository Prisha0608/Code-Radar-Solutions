#include<stdio.h>
int isPrime(int num){
    
    for(int i=2;i<num;i++){
        int p=1;
        if(i%num==0){
            p=0;
            break;
        }

    }
    if(p==0){
        return 0;
    }else{
        return 1;
    }
}