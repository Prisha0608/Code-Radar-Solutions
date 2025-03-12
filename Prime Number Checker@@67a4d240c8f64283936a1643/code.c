#include<stdio.h>
int isPrime(int num){
    p=1;
    for(int i=2;i<num;i++){
        if(i%num==0){
            p=0;
        }

    }
    if(p==0){
        printf("0");
    }else{
        printf("1");
    }
}