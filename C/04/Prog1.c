/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：从字符串s中删除指定的字符c。

-------------------------------------------------*/

#include <stdio.h>
void wwjt();

fun(char s[],char c)
{
  
  /**********Program**********/
  int i,j;
  for(i=0;s[i]!='\0';i++)
  {
	  if(s[i]==c)
	  {
		  for(j=i;s[j+1]!='\0';j++)
		  {
			s[j]=s[j+1];
		  }
		  s[j]='\0';
	  }
  }
  /**********  End  **********/
  
}

main()
{
  static char str[]="turbo c and borland c++";
  char c='a';
  fun(str,c);
  printf("str=%s\n",str);
  wwjt();
}

void wwjt()
{
  FILE *IN,*OUT;
  char sin[80],cIN;
  int i;
  IN=fopen("13.IN","r");
  if(IN==NULL)
  {
    printf("Please Verify The Currernt Dir..it May Be Changed");
  }
  OUT=fopen("13.out","w");
  if(OUT==NULL)
  {
    printf("Please Verify The Current Dir.. it May Be Changed");
  }
  for(i=0;i<10;i++)
  {
    fscanf(IN,"%s",sin);
    cIN=getc(IN);cIN=getc(IN);
    fun(sin,cIN);
    fprintf(OUT,"%s\n",sin);
  }
  fclose(IN);
  fclose(OUT);
}
