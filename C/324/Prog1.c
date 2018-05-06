/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：能计算从1开始到n的自然数中偶数的平方的和，n由
      键盘输入，并在main()函数中输出。（n是偶数）

------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
  
int fun(int n)
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
  int t;
  int o;
  int c;
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
    fprintf(OUT,"%d\n",o);
  }
  fclose(IN);
  fclose(OUT);
}
