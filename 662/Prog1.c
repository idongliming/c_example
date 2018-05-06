/*程序设计*/
/*-----------------------------------*/
/* 输入某一年的第几天，计算并输出它是这一年的第几月第几日
-------------------------------*/

#include <stdio.h>
#include <stdlib.h>
void MonthDay(int year,int yearDay,int *pMonth,int *pDay);
void main()
{
        int choice;
        int year,month,day,yearday;
        printf("输入年和第几天\n");
        scanf("%d%d",&year,&yearday);
        MonthDay(year,yearday,&month,&day);
        printf("%d年%d天是%d月%d日\n",year,yearday,month,day);
        
}
void MonthDay(int year,int yearDay,int *pMonth,int *pDay)
{
        int k,i=0,month;
        int m[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}};
        /****************Program**********/
        if(year%4==0&&year%100!=0||year%400==0)
                k=1;
        else
                k=0;
        
        /**************End*************/
}
