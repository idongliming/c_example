/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：在键盘上输入一个3行3列矩阵的各个元素的值（值
      为整数），然后输出矩阵第一行与第三行元素之和，
      并在fun()函数中输出。

------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 

int fun(int a[3][3])
{
  /**********Program**********/    
   //问题了返回值应该是int 考试的时候题应该没问题
	int i,sum=0;
	for(i=0;i<3;i++)
	{
    sum+=a[0][i]+a[2][i];
  }
  /**********  End  **********/
  
}

main()
{
  int i,j,s,a[3][3];
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      scanf("%d",&a[i][j]);
  }
  s=fun(a);
  printf("Sum=%d\n",s);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int m;
  int n;
  int i[3][3];
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
  }
  for(m=0;m<3;m++)
  {
    for(n=0;n<3;n++)
      fscanf(IN,"%d",&i[m][n]);
  }
  o=fun(i);
  {   
    fprintf(OUT,"%d\n",o);
    
  }
  fclose(IN);
  fclose(OUT);
}





