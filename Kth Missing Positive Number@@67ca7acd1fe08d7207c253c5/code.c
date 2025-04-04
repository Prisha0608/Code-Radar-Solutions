int findKthMissing(int arr[],int n,int k){
    int f=1;
    int l=arr[n-1];
    int count=0;
    for(int i=f;i<l;i++){
        int found=0;
        for(int j=0;j<n;j++){
            if(arr[j]==i){
                found=1;
                break;
            }
        }
        if(!found){
            count++;
            if(count==k){
                return i;
            }
        }
    }
    k-=count;
    return arr[n-1]+k;
}