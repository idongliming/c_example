 /*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：对长度为8个字符的字符串，将8个字符按降序排列。
例如：原来的字符串为CEAedcab,排序后输出为edcbaECA。

------------------------------------------------*/

#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void  wwjt(); 

void  fun(char *s,int num)
{
  /**********Program**********/
  
  
  
  
  
  
  /**********  End  **********/
}
main()
{
  char s[10];
  printf("输入8个字符的字符串:");
  gets(s);
  fun(s,8);
  printf("\n%s",s);
  wwjt();
}
void wwjt()     
{     
  
  int i;
  char a[100];
  FILE *rf, *wf ;     
  rf = fopen("in.dat", "r") ;
  wf = fopen("out.dat", "w") ;
  for(i=0;i<3;i++)
  {
    fscanf(rf, "%s", &a);
    fun(a,8);
    fprintf(wf, "%s", a);
    fprintf(wf, "\n");
  }
  
  fclose(rf);
  fclose(wf);
}
