/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：判断一个整数w的各位数字平方之和能否被5整除，
      可以被5整除则返回1，否则返回0。

------------------------------------------------*/

#include <stdio.h>
#include"conio.h"
void  wwjt(); 
  
int fun(int w)
{
  /**********Program**********/
  
  
  
  
  
  
  /**********  End  **********/
  
}

main()   
{
  int m;
  printf("Enter m: ");
  scanf("%d", &m);
  printf("\nThe result is %d\n", fun(m));
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int c ;
  int t;
  int o;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Read FILE Error");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Write FILE Error");
  } for(c=1;c<=5;c++)
  { 
    fscanf(IN,"%d",&t);
    o=fun(t);
    fprintf(OUT,"%d\n",o);
  }
  fclose(IN);
  fclose(OUT);
}
