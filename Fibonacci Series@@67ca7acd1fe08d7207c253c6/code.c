void fibonacciSeries(int n){
    int s=0;
    int p=1;
    for(int i=0;i<n;i++){
        printf("%d ",s);
        int k=p;
        p=s;
        s=k+p;
    }
}