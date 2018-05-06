/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：编写一个函数，该函数可以统计一个长度为2的字符
      串在另一个字符串中出现的次数。
例如：假定输入的字符串为：asdasasdfgasdaszx67asdmklo，
      字符串为：as,则应输出6。

------------------------------------------------*/

#include<stdio.h>
#include<string.h>
#include<conio.h>
void  wwjt(); 
  
int fun(char *str,char *substr)
{
  /**********Program**********/
  
  
  
  
  
  
  /**********  End  **********/
}

main()
{
  char str[81],substr[3];
  int n;
  printf("输入主字符串： ");
  gets(str);
  printf("输入子字符串： ");
  gets(substr);
  puts(str);
  puts(substr);
  n=fun(str,substr);
  printf("n=%d\n",n);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  int n;
  char i[200];
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
  fscanf(IN,"%s",i);
  n=fun(i,"as");
  fprintf(OUT,"%d",n);
  fclose(IN);
  fclose(OUT);
}
