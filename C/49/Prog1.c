/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：请编一个函数void fun(int tt[M][N],int pp[N])，
      tt指向一个M行N列的二维数组，求出二维数组每列
      中最大元素，并依次放入pp所指一维数组中。二维
      数组中的数已在主函数中赋予。

------------------------------------------------*/

#include<conio.h>
#include<stdio.h>
#define M 3
#define N 4
void  wwjt(); 
  
void fun(int tt[M][N],int pp[N])
{
  /**********Program**********/

  /**********  End  **********/
}

main()
{
  int t[M][N]={{22,45,56,30},
  {19,33,45,38},
  {20,22,66,40}};
  int p[N],i,j,k;
  printf("The original data is:\n");
  for(i=0;i<M;i++)
  {
    for(j=0;j<N;j++)
      printf("%6d",t[i][j]);
    printf("\n");
  }
  fun(t,p);
  printf("\nThe result is:\n");
  for(k=0;k<N;k++) printf("%4d",p[k]);
  printf("\n");
  wwjt();
}
void wwjt()     
{     
  int i,j, array[3][4],p[4];
  FILE *rf, *wf ;     
  rf = fopen("in.dat", "r") ;
  wf = fopen("out.dat", "w") ;
  for (i=0; i < 3; i++)     
    for (j=0; j < 4; j++)
      fscanf(rf, "%d", &array[i][j]);     
    fun(array,p);
    for (j=0; j < 4; j++)
    {
      fprintf(wf, "%7d", p[j]);
      fprintf(wf, "\n");     
    }     
    fclose(rf) ;     
    fclose(wf) ;     
}
