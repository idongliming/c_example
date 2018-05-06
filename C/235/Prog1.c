/*------------------------------------------------
【程序设计】
--------------------------------------------------
等级判断
根据输入的百分制成绩score，转换成相应的五分制成绩grade后输出。已知转换标准为：
grade={█(A  90≤score≤100@B  80≤score<90@C   70≤score<80@D   60≤score<70
       @E   0≤score<60)}
要求用switch实现，switch之后再输出等级，不要在每个switch中直接输出等

------------------------------------------------*/

#include <stdio.h>
void main()
{
        int score;
        char grade;
        printf("输入成绩：");
        scanf("%d",&score);
  /**********Program**********/
		score/=10;
		switch(score)
		{
		case 10:
		case 9:
			grade = 'A';
			break;
		case 8:
			grade = 'B';
			break;
		case 7:
			grade = 'C';
			break;
        case 6:
			grade = 'D';
			break;
		default:
			grade = 'E';
			break;

		}
          /**********  End  **********/
        printf("成绩等级为：%c\n",grade);
}
