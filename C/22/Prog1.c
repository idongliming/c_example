/*------------------------------------------------
【程序设计】
--------------------------------------------------
/* 两个正整数的最大公约数（GCD）是能够整除这两个整数的最大整数*/
/* 请采用欧几里得方法编写计算最大公约数的函数Gcd()*/
/* 在主函数中调用该函数计算并输出从键盘任意输入的两个整数的最大公约数*/

/*------------------------------------------------*/
#include <stdio.h>
void main()
{
        int m,n;
        int Gcd(int m,int n);
        do
        {
                printf("输入m,n:");
                scanf("%d%*c%d",&m,&n);
        }while(m<=0||n<=0);
        printf("%d和%d的最大公约数为:%d\n",m,n,Gcd(m,n));
}
int Gcd(int m,int n)
{
        int r,t;
        /**********Program**********/
        //作业交过
        /********** End **********/
}

