int findKthMissing(int arr[],int n,int k){
    int k=1;
    int l=arr[n-1];
    int count=0;
    for(int i=k;i<l;i++){
        if(arr[i]!=i){
            count++;
            if(count==k){
                return k;
            }
        }
    }
    return arr[n-1]+1;
}