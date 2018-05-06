/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：调用函数fun判断一个三位数是否"水仙花数"。
      在main函数中从键盘输入一个三位数，并输
      出判断结果。请编写fun函数。
说明：所谓"水仙花数"是指一3位数，其各位数字立方和
      等于该数本身。
例如：153是一个水仙花数，因为153=1+125+27。

------------------------------------------------*/

#include <stdio.h>
void wwjt();
   
int fun(int n)
{
  
  /**********Program**********/
  
  
  
  
  
  
  /**********  End  **********/
  
  
}

main()
{
  int n,flag;
  scanf("%d",&n);
  flag=fun(n);
  if(flag)
    printf("%d 是水仙花数\n",n);
  else
    printf("%d 不是水仙花数\n",n);
  wwjt();
}
void wwjt()
{
  FILE *IN,*OUT;
  int iIN,i;
  int iOUT;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  for(i=0;i<10;i++)
  {    
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}
