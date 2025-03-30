#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++){
       for(int j=i;j<n-1;j++){
           printf(" ");
       }
       for(int k=i;k<=i*3;k++){
           printf("*");
       }
       printf("\n");
   }
   for(int i=n-2;i>=0;i--){
       for(int j=0;j<=n-i-2;j++){
           printf(" ");
       }
       for(int k=i;k<=i*3;k++){
           printf("*");
       }
       printf("\n");
   }

    return 0;
}