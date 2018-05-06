/* 程序设计 */
/*------------------------------------------*/
/* 输入某班学生某门课的成绩（最多不超过40人，具体人数由用户键盘输入），
用函数编程统计不及格人数
-----------------------------------------*/
#include <stdio.h>
#define N 40
int i;
int countfail(float score[],int n);
void readscore(float score[],int n);
void main()
{
        float score[N];
        int n,k;
        printf("输入学生人数：");
        scanf("%d",&n);
        readscore(score,n);
        k=countfail(score,n);
        printf("不及格学生人数为：%d\n",k);

}
void readscore(float score[],int n) /*读学生成绩 */
{
        for(i=0;i<n;i++)
        {
                printf("输入第%d个人的成绩:",i+1);
                scanf("%f",&score[i]);
        }
}
int countfail(float score[],int n) /*统计不及格人数*/
{
        int count=0; /*计数 */
        int i;
        /***************Program*************/
        for(i=0;i<n;i++)
		{
			if(score[i]<60);
			count++;
		}
		return count;
        /**************End******************/
}

