#include<stdio.h>
int isPrime(int num){
    int p=1;
    for(int i=2;i<num;i++){
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