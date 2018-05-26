/*------------------------------------------------
��������ơ�
--------------------------------------------------

���ܣ���д����ʵ�־���3��3�У���ת�ã������л�����   
���磺��������ľ��� 
       100 200 300     
       400 500 600     
       700 800 900 
      ���������   
      100 400 700     
      200 500 800
      300 600 900     

------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
          
int fun(int array[3][3])     
{
  /**********Program**********/   
  int array1[3][3],i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      array1[i][j]=array[j][i];
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      array[i][j]=array1[i][j];
    }
  }
  return;//这里不知道为什么题目有返回值，
  //主函数并没有用到返回值，也没有说要返回什么
  /**********  End  **********/
}     
main()     
{     
  int i,j;     
  int array[3][3]={{100,200,300},     
  {400,500,600},     
  {700,800,900}};     
  for (i=0; i < 3; i++)     
  {
    for (j=0; j < 3; j++)     
      printf("%7d",array[i][j]);     
    printf("\n");     
  }     
  fun(array);     
  printf("Converted array:\n");     
  for (i=0; i < 3; i++)     
  { 
    for (j=0; j < 3; j++)     
      printf("%7d",array[i][j]);     
    printf("\n");
  }
  wwjt();     
} 
    
void wwjt()     
{     
  int i,j, array[3][3];     
  FILE *rf, *wf ;     
  rf = fopen("in.dat", "r") ;
  wf = fopen("out.dat", "w") ;
  for (i=0; i < 3; i++)     
    for (j=0; j < 3; j++)     
      fscanf(rf, "%d", &array[i][j]);     
    fun(array);     
    for (i=0; i < 3; i++)     
    { 
      for (j=0; j < 3; j++)     
        fprintf(wf, "%7d", array[i][j]);     
      fprintf(wf, "\n");     
    }     
    fclose(rf) ;     
    fclose(wf) ;     
}
