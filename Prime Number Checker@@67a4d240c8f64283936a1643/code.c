#include<stdio.h>
int isPrime(int num){
    int p=1;
    if(num==1 || num==0){
        return 0;
    }
    if(num>1){
    for(int i=2;i<num;i++){
        
        if(num%i==0){
            p=0;
            break;
        }

    }
    }
    if(p==0){
        return 0;
    }else{
        return 1;
    }
}