/*------------------------------------------------
【程序设计】
--------------------------------------------------

采用穷举法，用函数编程实现计算两个正整数的最小公倍数（LCM）
在主函数中调用该函数计算并输出从键盘任意输入的两整数的最小公倍数
--------------------------------------------------*/
#include <stdio.h>
#include <math.h>
int lcm(int m,int n)
{
        
        int k;
        /**********Program**********/
        int a=m,b=n,t;
		if(m<n)
		{
			t=m;
			m=n;
			n=t;
		}
		while((k=m%n)!=0)
		{
			m=n;
			n=k;
		}
		return a*b/n;
        /********** End **********/
}
int max(int m,int n)
{
        if(m>n)
                return m;
        else
                return n;
}
void main()
{
        int m,n,gbs;
        int lcm(int m,int n);
        int max(int m,int n);
        do
        {
                printf("输入两个数：");
                scanf("%d%*c%d",&m,&n);
        }while(m<0||n<0);
        gbs=lcm(m,n);
        printf("%d和%d的最小公倍数为:%d\n",m,n,gbs);
}
