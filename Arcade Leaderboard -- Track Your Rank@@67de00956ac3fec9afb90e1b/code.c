int trackPlayerRanks(int ranked[],int n,int players[],int m,int result[]){
    int p[100];
    int s=0;
    for(int i=0;i<n;i++){
        if(ranked[i]==ranked[i+1]){
            continue;
        }else{
            p[s]=ranked[i];
            s++;
        }
    }
    
    int l=0;
    int flag=0;
    for(int j=0;j<m;j++){
        for(int k=0;k<s;k++){
            if(p[k]<players[j]){
                result[l]=k+1;
                l++;
                flag=1;
                break;
            }else if(p[k]==players[j]){
                result[l]=k+1;
                l++;
                flag=1;
                break;
            }
            
        }
        if(flag==0){
        result[l]=s+1;
        l++;}
    }
}