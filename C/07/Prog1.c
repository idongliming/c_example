/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求一个四位数的各位数字的立方和

------------------------------------------------*/

#include <stdio.h>
void wwjt();
     
int fun(int n)
{
  
  /**********Program**********/
  int sum=0;
  while(n)
  {
	sum+=(n%10)*(n%10)*(n%10);
	n/=10;
  }
  return sum;
  /**********  End  **********/
  
}

main()
{
  int k;
  k=fun(1234);
  printf("k=%d\n",k);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int iIN,iOUT,i;
  IN=fopen("22.IN","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("22.out","w");
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
