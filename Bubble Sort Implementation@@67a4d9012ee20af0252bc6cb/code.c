void bubbleSort(int arr[],int n){
    int  swapped;
    for(int i=0;i<n;i++){
        swapped=0;
        for(int j=1;j<n-i;j++){
            if(arr[j]<arr[j-1]){
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
    
}
    void printArray(int arr[],int n){
        for(int k=0;k<n;k++){
            printf("%d ",arr[k]);
        }
        
    }
    
