/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：将两个两位数的正整数a、b合并形成一个整数放在c
      中。合并的方式是： 将a数的十位和个位数依次放
      在c数的个位和百位上, b数的十位和个位数依次放
      在c数的十位和千位上。     
例如： 当a=45，b=12， 调用该函数后， c=2514。
     
------------------------------------------------*/

#include <stdio.h>
void  wwjt(); 
 
void fun(int a, int b, long *c)     
{
  /**********Program**********/
  //同下一题
  /**********  End  **********/
}

main()     
{ 
  int a,b; long c;     
  printf("input a, b:");     
  scanf("%d%d", &a, &b);     
  fun(a, b, &c);     
  printf("The result is: %ld\n", c);
  wwjt();     
}  

void wwjt( )     
{  
  FILE *rf, *wf ;     
  int i, a,b ; long c ;     
  rf = fopen("in.dat", "r") ;     
  wf = fopen("out.dat","w") ;     
  for(i = 0 ; i < 10 ; i++) 
  {     
    fscanf(rf, "%d,%d", &a, &b) ;     
    fun(a, b, &c) ;     
    fprintf(wf, "a=%d,b=%d,c=%ld\n", a, b, c) ;     
  }     
  fclose(rf) ;     
  fclose(wf) ;     
}
