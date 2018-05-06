/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：从键盘为一维整型数组输入10个整数，调用fun
      函数找出其中最小的数，并在main函数中输出。
      请编写fun函数。

-------------------------------------------------*/

#include "stdio.h"
void wwjt();

int fun(int x[],int n)
{
  
  /**********Program**********/
  int i,min=x[0];
  for(i=1;i<n;i++)
  {
	if(x[i]<min)
	{
		min=x[i];
	}
  }
  return min;
  /**********  End  **********/
  
  
}

main()
{
  int a[10],i,min;
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
  for(i=0;i<10;i++)
    printf("%3d",a[i]);
  printf("\n");
  min=fun(a,10);
  printf("%d\n",min);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int iIN[10],i;
  int iOUT,iCOUNT;
  IN=fopen("4.IN","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("4.out","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  for(i=0;i<10;i++)
  {   
    for(iCOUNT=0;iCOUNT<10;iCOUNT++)
      fscanf(IN,"%d",&iIN[iCOUNT]);
    iOUT=fun(iIN,10);
    fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}
