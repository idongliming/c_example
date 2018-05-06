/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：编写程序，实现矩阵（3行3列）的转置（即行列互换）   
例如：输入下面的矩阵： 
       100 200 300     
       400 500 600     
       700 800 900 
      程序输出：   
      100 400 700     
      200 500 800
      300 600 900     

------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
          
int fun(int array[3][3])     
{
  /**********Program**********/   
  
  
  
  
  
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
