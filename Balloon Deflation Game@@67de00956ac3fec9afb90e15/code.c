void deflateBalloons(int air[],int n){
    printf("%d\n",n);
    while(n>0){
        int min=air[0];
        for(int i=0;i<n;i++){
          if(air[i]>0 && air[i]<min){
            min=air[i];
          }
        }
        int count=1;
        for(int j=0;j<n;j++){
            if(min==air[j]){
                count++;
                air[j]=-1;
            }
        }
        printf("%d\n",c);
        n=n-count;
        // if(n>0){
        //     printf("%d\n",n);
        // }
    }
}