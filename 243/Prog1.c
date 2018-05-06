/*------------------------------------------------
【程序设计】
--------------------------------------------------
采用递归方法，编写函数，计算n!，
在主程序中实现计算从m中取k个数的组合
 
在主程序中要保障输入的数据不得小于0，
即m>0,k>0,m-k>0.
如果用户输入的数据不符合条件，则循环输入，
直到符合条件为止（请用do…while实现）。
------------------------------------------------*/

#include <stdio.h>
unsigned long jiech(unsigned int n);
void main()
{
        
        int m,k;
        long zh;
        do
        {
                printf("输入m,k：");
                scanf("%d%*c%d",&m,&k);
        }while(m<0||k<0||m-k<0);
        zh=jiech(m)/(jiech(k)*jiech(m-k));
        printf("zh=%ld\n",zh);
}
/* 计算n!*/
unsigned long jiech(unsigned int n)
{
         /**********Program**********/
        int j;
		unsigned long jie=1;
		for(j=n;j>=1;j--)
		{
			jie*=j;
		}
		return jie;
         /********** End **********/
}
