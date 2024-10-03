#include<stdio.h>
int main(){
  char s[10];

  for(int i=0;i<10;i++){
    scanf("%c",&s[i]);
  }
  if(s[8]=='P')
  {
      if( s[0]!='1' || s[1]!='2'){
          
      s[0]=s[0]+1;
      s[1]=s[1]+2;
      }
  }
  if(s[8]=='A')
  {
     
      if((s[0]=='1')&& (s[1]=='2'))  {
          
      s[0] ='0';
      s[1] ='0';
      } 
  }

   for(int i=0;i<8;i++){
    printf("%c",s[i]);
  }
return 0;
}
