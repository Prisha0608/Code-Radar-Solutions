int findKthMissing(int arr[],int n,int k){
    int f=1;
    int l=arr[n-1];
    int count=0;
    for(int i=f;i<l;i++){
        if(arr[i]+1!=i){
            count++;
            if(count==k){
                return f;
            }
        }
    }
    return arr[n-1]+1;
}