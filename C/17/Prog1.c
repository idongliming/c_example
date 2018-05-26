/*------------------------------------------------
【程序设计】
--------------------------------------------------
猜数游戏：
编程设计一个简单的猜数游戏：由计算机想一个数由用户猜，
如果猜对，则提示"正确！"，如果猜错了，则判断是大了，还是小了，
分别显示"错误，大了！"或者"错误，小了！"。
如果猜错，最多允许猜5次，如果5次，仍未猜对，则此数不可以再猜。
无论是猜对还是猜错，均询问用户是否继续猜下一个数，
如果猜，则再产生一个新的数据由用户来猜，
否则，统计出用户猜数的个数以及猜对、猜错的个数，整个游戏结束。
要求：用do...while 循环实现
------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
        int magic,guess,n,k=0,right=0,error=0; /* magic:计算机产生的数，guess：用户猜的数*/
        char cont; /* 表示是否继续猜下一个数 */
         /**********Program**********/
        srand(time(NULL));//用时间初始化随机数种子
        magic=rand()%10;
        printf("猜猜我心里想的什么数（0-9）:");
        do{
                scanf("%d",&guess);
                if(guess>magic)
                {
                        printf("大了\n");
                        error++;
                }
                
                else if(guess<magic)
                {
                        printf("小了\n");
                        error++;
                }
                else
                right++;
                
        }while(guess==magic||error==5);
        
        
         /**********  End  **********/
        printf("你一共猜了%d个数，正确的%d个，错误的%d个\n",k,right,error);
        printf("游戏结束，再见！\n");
                
}
