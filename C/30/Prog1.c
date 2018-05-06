/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：将主函数中输入的字符串反序存放。
例如：输入字符串“abcdefg”，则应输出“gfedcba”。

------------------------------------------------*/
  
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define N 81
void wwjt();
 
void fun(char *str,int n)
{                
  
  /**********Program**********/
  char t;
  int i;
  for(i=0;i<n/2;i++)
  {
	  t=str[i];
	  str[i]=str[n-1-i];
	  str[n-1-i]=t;
  }
  /**********  End  **********/
  
}

main()
{
  char s [N];
  int l;
  printf("input a string:");gets(s);
  l=strlen(s);
  fun(s,l);
  printf("The new string is :");puts(s);
  wwjt();
}
void wwjt()
{
  FILE *IN,*OUT;
  char sin[20],*sOUT;
  int iLENGTH;
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
  iLENGTH=strlen(sin);
  sOUT=sin;
  fun(sin,iLENGTH);
  fprintf(OUT,"%s\n",sOUT);
  fclose(IN);
  fclose(OUT);
}
