/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：输入一个字符串，过滤此串，只保留串中的字母字
      符，并统计新生成串中包含的字母个数。
例如：输入的字符串为ab234$df4，新生成的串为abdf 。

------------------------------------------------*/

#include <stdio.h>
#include <conio.h>
#define N 80
void wwjt();
   
fun(char *ptr)
{
  
  /**********Program**********/
  
  
  
  
  
  
  /**********  End  **********/
  
}

main()
{
  char str[N];
  int s;
  printf("input a string:");gets(str);
  printf("The origINal string is :"); puts(str);
  s=fun(str);
  printf("The new string is :");puts(str);
  printf("There are %d char IN the new string.",s);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  char sin[N];
  int iOUT;
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
  fscanf(IN,"%s",sin);
  iOUT=fun(sin);
  fprintf(OUT,"%d %s\n",iOUT,sin);
  fclose(IN);
  fclose(OUT);
}
