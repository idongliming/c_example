/*程序设计*/
/*-----------------------------------------------*/
/*运用swap函数，编写函数实现两个数组中对应元素值的交换
---------------------------------------------*/ 
#include <stdio.h>
#define N 50
void main()
{
        int a[N],b[N],n;
        int i;
        void readdata(int a[],int n);
        void outputdata(int a[],int n);
        void swap(int *x,int *y);
        void exchange(int a[],int b[],int n);
        printf("输入数组元素个数：");
        scanf("%d",&n);
        readdata(a,n);
        readdata(b,n);
        exchange(a,b,n);
        printf("交换后：\n");
        outputdata(a,n);
        outputdata(b,n);
        
}
void readdata(int a[],int n) /*读数组 */
{
        int i;
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
}
void outputdata(int a[],int n) /*输出数组*/
{
        int i;
        for(i=0;i<n;i++)
                printf("%d\t",a[i]);
        printf("\n");
}
void swap(int *x,int *y)  /*交换两个数 */
{
        int t;
        t=*x;
        *x=*y;
        *y=t;
}
void exchange(int a[],int b[],int n)  /*交换两个数组对应元素 */
{
        int i;
        /***********Program *************/
		for(i=0;i<n;i++)
		{
			swap(&a[i],&b[i]);
		}
        /**************End****************/
}



