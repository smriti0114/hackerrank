#include<stdio.h>
int main()
{
    int a[1000],n,i,max,min,countmax=0,countmin=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max){
            max=a[i];
            countmax++;
            
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<min){
            
            min=a[i];
            countmin++;
        }
    }
    printf("%d %d",countmax,countmin);
    
    return 0;
}
