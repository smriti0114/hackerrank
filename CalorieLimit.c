#include <stdio.h>

int main() {
	// your code goes here
    int t,n,k,a[100],i,j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int sum=0,count=0;
        scanf("%d",&n);
        scanf("%d",&k);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(int t=0;t<n;t++){
            
            sum += a[t];
            if( sum <=k ){
                count++;
                // printf("%d\n",count);
            }
            else{
                break;
            }
        }
    
        printf("%d\n",count);
        
    }
    
}

