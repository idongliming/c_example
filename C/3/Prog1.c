/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：从键盘输入一个大于3的整数，调用函数fun判断
      其是否素数，然后在main函数中输出相应的结论
      信息。
例如：7是素数，8不是素数。请编写fun函数。素数是
      仅能被1和自身整除的数

-------------------------------------------------*/

#include <stdio.h>
void wwjt();

int fun(int n)
{
  
  /**********Program**********/
  int i,flag=1;
  for (i=2;i<n/2;i++)
  {
	  if(n%i==0)
	  {
		  flag=0;
	  }
	  return flag;
  }
  /**********  End  **********/
} 
    
main()
{
  int m,flag;
  printf("input an integer:");
  scanf("%d",&m);
  flag=fun(m);
  if(flag)
    printf("%d is a prime.\n",m);
  else
    printf("%d is not a prime.\n",m);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int iIN,iOUT,i;
  IN=fopen("5.IN","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("5.out","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  for(i=0;i<10;i++)        
  {        
    fscanf(IN,"%d",&iIN);
    iOUT=fun(iIN);
    fprintf(OUT,"%d\n",iOUT);
  }
  fclose(IN);
  fclose(OUT);
}
