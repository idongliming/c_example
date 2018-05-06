/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：统计出若干个学生的平均成绩，最高分以及得最高
      分的人数。
例如：输入10名学生的成绩分别为92，87，68，56，92，
      84，67，75，92，66，则输出平均成绩为77.9，
      最高分为92，得最高分的人数为3人。

------------------------------------------------*/

#include <stdio.h>
void wwjt();
   
float Max=0;
int J=0;

float fun(float array[],int n)
{
  
  /**********Program**********/
  int i;
  float ave=0;
  for(i=0;i<n;i++)
  {
	  if(array[i]>Max)
	  {
		  Max=array[i];
		  J=1;
	  }
		else if(array[i]==Max)
			J++;
	   ave+=array[i]/n;
  }
  return ave;
  /**********  End  **********/
  
}

main(  )
{
  float  a[10],ave;
  int i=0;
  for(i=0;i<10;i++)
    scanf("%f",&a[i]);
  ave=fun(a,10);
  printf("ave=%f\n",ave);
  printf("max=%f\n",Max);
  printf("Total:%d\n",J);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  float iIN[10],iOUT;
  int iCOUNT;
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
  for(iCOUNT=0;iCOUNT<10;iCOUNT++)
    fscanf(IN,"%f",&iIN[iCOUNT]);
  iOUT=fun(iIN,10);
  fprintf(OUT,"%f %f\n",iOUT,Max);
  fclose(IN);
  fclose(OUT);
}
