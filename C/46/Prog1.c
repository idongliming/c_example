/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：从低位开始取出长整型变量s中偶数位上的数，依次
      构成一个新数放在t中。     
例如：当s中的数为：7654321时，t中的数为：642。
     
------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
  
long fun (long s,long t)
{
  /**********Program**********/
  //同下一题
  /**********  End  **********/
  return t;
}  

main()     
{
  long s, t=0,m;
  printf("\nPlease enter s:"); scanf("%ld", &s);     
  m=fun(s,t);
  printf("The result is: %ld\n", m);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int n;
  long i,t=0,m;
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
  for(n=0;n<5;n++)
  {   
    fscanf(IN,"%ld",&i);
    m=fun(i,t);
    fprintf(OUT,"%ld\n",m);
    
  }
  fclose(IN);
  fclose(OUT);
}
