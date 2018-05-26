/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：编写函数fun求1!+2!+3!+ …… +n!的和,在main函
      数中由键盘输入n值，并输出运算结果。请编写fun
      函数。
例如：若n值为5，则结果为153。

------------------------------------------------*/
    
#include<stdio.h>
void wwjt();
 
long int  fun(int n)
{
  
  /**********Program**********/
  int i,jie,j,sum=0;
  for(i=1;i<=n;i++)
  {
    for(j=1,jie=1;j<=i;j++)
    {
      jie*=j;
    }
    sum+=jie;
  }
  return sum;
  /**********  End  **********/
  
}

main()
{
  int n;
  long int result;
  scanf("%d",&n);
  result=fun(n);
  printf("%ld\n",result);
  wwjt();
}

void wwjt()
{
FILE *IN,*OUT;
  int i;
  int iIN;
  long int iOUT;
  IN=fopen("in.dat","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..It May Be Changed");
  }
  OUT=fopen("out.dat","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. It May Be Changed");
  }
  for(i=0;i<10;i++)
  {        
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%ld\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}
