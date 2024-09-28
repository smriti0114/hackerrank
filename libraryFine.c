#include<stdio.h>
int main(){
      int d1,d2,m1,m2,y1,y2, fine;
      scanf("%d%d%d",&d1,&m1,&y1);
      scanf("%d%d%d",&d2,&m2,&y2);
      if(y1>y2){
        printf("10000");
      }
      else if(y1==y2){
          if(m1>m2){
             fine=(m1-m2)*500;
             printf("%d",fine);
          }
          else if(m1==m2){
              if(d1>d2){
                  fine=(d1-d2)*15;
                  printf("%d",fine);
              }
              else{
                  printf("0");
              }
          }
          else {
              printf("0");
          }
           
      }
      else
      printf("0");
      return 0;
}
