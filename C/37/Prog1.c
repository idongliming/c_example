/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ��ڼ���������һ��3��3�о���ĸ���Ԫ�ص�ֵ��ֵ
      Ϊ��������Ȼ��������Խ���Ԫ�ص�ƽ����,����
      fun()�����������

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