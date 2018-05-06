/*程序设计*/
/*-----------------------------------*/
/* 输入某年某月某日，计算并输出它是这一年的第几天
-------------------------------*/

#include <stdio.h>
#include <stdlib.h>
int DayofYear(int year,int month,int day);
void main()
{
        int choice;
        int year,month,day,yearday;
        printf("输入年、月、日\n");
        scanf("%d%d%d",&year,&month,&day);
        yearday=DayofYear(year,month,day);
        printf("%d年%d月%d日是这一年的第%d天\n",year,month,day,yearday);
}
int DayofYear(int year,int month,int day)  /* 计算第几天 */
{
        int k,i,yearday=0;
        int m[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}};
        /**************Program**************/
        








        /***************End****************/
}

