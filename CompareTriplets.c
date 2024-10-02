#include<stdio.h>
int main(){
      int a[3],b[3],i,counta=0,countb=0;
      for(i=0;i<3;i++)
      {
          scanf("%d",&a[i]);
      }
      for(i=0;i<3;i++)
      {
          scanf("%d",&b[i]);
      }
      for(i=0;i<3;i++)
      {
              if(a[i]>b[i])
              {
                  counta++;
              }
              if(a[i]<b[i])
              {
                  countb++;
              }
          }
      printf("%d %d",counta,countb);
return 0;
}
