#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[1000],b[1000],budget,max=-1,n,m,i,j,ans=0;
    scanf("%d",&budget);
    scanf("%d%d",&n,&m);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               ans=a[i]+b[j]; 
                if(ans<=budget && ans>max)
                {
                    max=a[i]+b[j];
                }
            }
        }
        
        printf("%d",max);
    }