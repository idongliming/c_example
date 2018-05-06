/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求出菲波那契数列的前一项与后一项之比的极限的
      近似值。
例如：当误差为0.0001时，函数值为0.618056。

-------------------------------------------------*/

#include <stdio.h>
#include "math.h"
void wwjt();
     
float fun()
{
  
  /**********Program**********/
  int i;
  double a=1,b=1,c;
  for(i=0;i<1000;i++)
  {
	  c=a+b;
	  a=b;
	  b=c;
  }
  return a/c;
  /**********  End  **********/
  
}

main()
{
  printf("y=%f\n",fun());
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  float fOUT;
  IN=fopen("19.IN","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("19.out","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  fOUT=fun();
  fprintf(OUT,"%f\n",fOUT);
  fclose(IN);
  fclose(OUT);
}
