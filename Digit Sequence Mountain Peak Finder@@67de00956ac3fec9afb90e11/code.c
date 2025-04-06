int mountainPeak(int n){
    int s[100];
    int p=0;
    while(n>0){
        s[p]=n%10;
        n/=10;
        p++;
    }
    int start=0;
    int end=p-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(s[mid]<s[mid+1]){
            start=mid+1;
        }else{
            end=mid;
        }
    }
    if(s[start]>s[start-1] && s[start]>s[start+1]){
        return s[start];
    }else{
        return -1;
    }
}