void deflateBalloons(int air[],int n){
   int p=n;
    printf("%d\n",n);
    while(n>0){
        int min=air[0];
    for(int i=0;i<p;i++){
        if(air[i]>0 && air[i]<min){
            min=air[i];
        }if(air[i]==0){
            n=n-1;
        }
    }
    
    int count=0;
    for(int j=0;j<p;j++){
        if(air[j]==min){
            count++;
            
            air[j]=-1;
        }
    }
    
    n-=count;
    if(n>0){
        printf("%d\n",n);
    }
}
    return 0; 
}