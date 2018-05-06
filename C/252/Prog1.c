/*程序设计*/
/*-------------------------------------------------------
输入某班学生某门课程成绩，排序后，编写函数实现二分查找指定的某个成绩
------------------------------------------*/
#include <stdio.h>
#define N 100
void readscore(float score[],int n);
void writescore(float score[],int n);
void sortscore(float score[],int n);
int searchscore(float score[],int n,float cj);
void main()
{
        float score[N],cj;
        int n,k;
        printf("输入人数：");
        scanf("%d",&n);
        readscore(score,n);
        writescore(score,n);
        sortscore(score,n);
        printf("排序后成绩从高到低为：\n");
        writescore(score,n);
        printf("输入要查找的成绩：");
        scanf("%f",&cj);
        k=searchscore(score,n,cj);
        if(k==-1)
                printf("要找的成绩不存在！\n");
        else
                printf("要找的成绩在第%d个位置\n",k+1);
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
void sortscore(float score[],int n)
{
        int i,j,k;
        for(i=0;i<n-1;i++)
        {        k=i;
                for(j=i+1;j<n;j++)
                        if(score[j]>score[k])
                                k=j;
                if(k!=i)
                {
                        float t;
                        t=score[i];
                        score[i]=score[k];
                        score[k]=t;
                }
        }
}
int searchscore(float score[],int n,float cj)
{
        int low=0,high=n-1,mid;
        /****************Program***************/
        









        /****************End*****************/
        return -1;

}

