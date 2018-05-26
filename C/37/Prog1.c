/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：在键盘上输入一个3行3列矩阵的各个元素的值（值
      为整数），然后输出主对角线元素的平方和,并在
      fun()函数中输出。

------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
  
main()
{ 
  int i,j,s,a[3][3];;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
      scanf("%d",&a[i][j]);
  }
  s=fun(a);
  printf("Sum=%d\n",s);
  wwjt();
}

int fun(int a[3][3])
{
  /**********Program**********/
  return a[0][0]*a[0][0]+a[1][1]*a[1][1]+a[2][2]*a[2][2];
  //一共三个数，这样更简单，没必要循环嵌套
  /**********  End  **********/
  
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
