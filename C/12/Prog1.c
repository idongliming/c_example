/*------------------------------------------------
【程序设计】
----------------------------------------------
编程从键盘输入某年某月（包括闰年），用switch语句编程输出该年的该月拥有的天数。
要求考虑闰年以及输入月份不在合法范围内的情况。
已知闰年的2月有29天，平年的2月有28天。
判断year是否为闰年的条件是：
（1）        year能被4整除但不能被100整除，或者
（2）        year能被400整除。

----------------------------------------------*/

#include <stdio.h>
void main()
{
        int year,month,days,leap=0;
        printf("请输入年份和月份:");
        scanf("%d%*c%d",&year,&month);
          /**********Program**********/
          switch(month)
		  {
		  case 1:
		  case 3:
		  case 5:
		  case 7:
		  case 8:
		  case 10:
		  case 12:
			  days=31;
			  break;
		  case 4:
		  case 6:
		  case 9:
		  case 11:
			  days=30;
			  break;
		  case 2:
			  if(year%4==0&&year%100!=0||year%400==0)
				  days=29;
			  else
				  days=28;
			  break;
          default:
			  printf("输入错误,程序退出\n");
			  return 0;
		  }
          /********** End **********/
        printf("%d年%d月有%d天\n",year,month,days);
}
