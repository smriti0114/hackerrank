#include<stdio.h>
int main()
{
    int a[1000000],n,b,i,k,sum=0,divi;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }

    sum=sum-a[k];
    divi=sum/2;
    
 if(b==divi)
    {
        printf("Bon Appetit");
    }
    else
    {
        printf("%d",b-divi);
    }
    return 0;
}
    