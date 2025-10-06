# include <stdio.h>
# define PI 3.14159

int main(void)
{
   int number=7;
   float pies=12.75;
   int cost=7800;

    printf("这 %d 份派应该被分成  %f 份 \n",number, pies);
    printf("每份派的价格是 %f \n",PI);//一一对应
    printf("%c%d\n",'$', 2*cost);
    //如果需要打印"%",需要使用"%%"

    return 0;
}