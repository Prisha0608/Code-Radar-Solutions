int maxGadgetSpend(int keyboards[],int n,int headsets[],int m,int budget){
    int flag=0;
    int max=0;
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int sum=keyboards[i]+headsets[j];
        if(sum>max && sum<=budget){
            max=sum;
            flag=1;
        }
    }
   }
   if(!flag){
    return -1;
   }else{
    return max;
   }
}