/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求给定正整数n以内的素数之积。（n<28）

------------------------------------------------*/

#include <stdio.h>
#include"conio.h"
void  wwjt(); 
  
long fun(int n)
{
  /**********Program**********/
  
  
  
  
  
  
  /**********  End  **********/
  
}

main()   
{
  int  m;
  printf("Enter m: ");
  scanf("%d", &m);
  printf("\nThe result is %ld\n", fun(m));
  wwjt();
}   

void wwjt()
{
  FILE *IN,*OUT;
  int c ;
  int t;
  long o;
  
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read FILE Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write FILE Error");
  } 
  for(c=1;c<=5;c++)
  { 
    fscanf(IN,"%d",&t);
    o=fun(t);
    fprintf(OUT,"%ld\n",o);
  }
  fclose(IN);
  fclose(OUT);
}
