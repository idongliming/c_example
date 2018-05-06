/*程序设计*/
/*----------------------------------------------
从键盘输入某班学生某门课程的成绩，编写函数计算平均成绩
----------------------------------*/
#include <stdio.h>
#define N 100
void readscore(float score[],int n);
void writescore(float score[],int n);
float averscore(float score[],int n);
void main()
{
        float score[N],cj;
        int n,k;
        printf("输入人数：");
        scanf("%d",&n);
        readscore(score,n);
        writescore(score,n);
        printf("平均成绩为：%f\n",averscore(score,n));
}
void readscore(float score[],int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                printf("输入第%d个学生成绩：",i+1);
                scanf("%f",&score[i]);
        }
}
void writescore(float score[],int n)
{
        int i;
        printf("学生成绩分别为：\n");
        for(i=0;i<n;i++)
        {
                printf("%f\t",score[i]);
        }
        printf("\n");
}
float averscore(float score[],int n)
{
        float aver=0.0;
        int i;
        /***************Program*************/
        







        /***************End******************/
}

