/*------------------------------------------------
【程序设计】
--------------------------------------------------

功能：求出二维数组周边元素之和，作为函数值返回。二
      维数组的值在主函数中赋予。

-------------------------------------------------*/

#define M 4
#define N 5
#include <stdio.h>
void wwjt();
 
int fun(int a[M][N])
{

/**********Program**********/
	int i,sum=0;
	for(i=0;i<N;i++)
	{
		sum+=a[0][i];
		sum+=a[M-1][i];
	}
	for(i=1;i<M-1;i++)
	{
		sum+=a[i][0];
		sum+=a[i][N-1];
	}
	return sum;
/**********  End  **********/

}

main()
{
int a[M][N]={{1,3,5,7,9},{2,4,6,8,10},{2,3,4,5,6},{4,5,6,7,8}};
int y;
y=fun(a);
printf("s=%d\n",y);
wwjt();
}
void wwjt()
{
FILE *IN,*OUT;
int iIN[M][N],iOUT;
int i,j,k;
IN=fopen("14.IN","r");
if(IN==NULL)
{printf("Please Verify The Currernt Dir..it May Be Changed");
}
OUT=fopen("14.out","w");
if(OUT==NULL)
{printf("Please Verify The Current Dir.. it May Be Changed");
}
for(k=0;k<10;k++)
{  for(i=0;i<M;i++)
    for(j=0;j<N;j++)
        fscanf(IN,"%d",&iIN[i][j]);

iOUT=fun(iIN);
fprintf(OUT,"%d\n",iOUT);
}
fclose(IN);
fclose(OUT);
}
