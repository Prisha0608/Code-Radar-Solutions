void factorialRange(int start,int end){
    int k;
    int flag=0;
    if(start>end || start<0 || end<0){
        printf("Invalid range");
        flag=1;
    }
    if(flag==0){
    for(int i=start;i<=end;i++){
        k=1;
        if(i==0 || i==1){
            printf("1\n");
        }else{
        for(int j=2;j<=i;j++){
           k=k*j; 
        }
        printf("%d\n",k);
        }
    }
    }
}