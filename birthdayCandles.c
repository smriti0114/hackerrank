#include<stdio.h>
int main(){
  int a[100000],n,max,i,count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  max = a[0];  // maximum as first element of array
  for(i=0;i<n;i++)
  {
      if(a[i]>max)    // comparing
      {
         max=a[i];     // when meets the case maximum gets updates not ans u r updating ans
      }
  }
 
  for(i=0;i<n;i++)
  {
      if(max==a[i]){
        count++;
      }
  }
   printf("%d",count);
  return 0;
  }

