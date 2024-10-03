#include<stdio.h>
int main(){
     int a[5];
     long int max,min,sum=0,b,c,i;
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    max=a[0];
    min=a[0];
   
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
     b=sum-max;
    c=sum-min;
    printf("%ld %ld",b,c);
        
return 0;
}
