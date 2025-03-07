bubbleSort(arr,n){
    boolean swapped;
    for(int i=0;i<n;i++){
        swapped=false;
        for(int j=1;j<n-i;j++){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=arr[j];
                swapped=true;
            }
        }
        if(!swapped){
            break;
        }
    }
    return arr;
}
    printArray(arr,n){
        for(int k=0;k<n;k++){
            return arr[k];
        }
        
    }
    
