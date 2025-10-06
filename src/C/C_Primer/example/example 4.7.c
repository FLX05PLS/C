# include <stdio.h>
# define aaa 123456
# define bbb 1
int main(void)
{
    printf("*%d*\n",aaa);
    printf("*%2d*\n",aaa);//123456占用6个位置大于2不需要空格
    printf("*%2d*\n",bbb);
    printf("*%10d*\n",aaa);//10代表宽度
    printf("*%-10d*\n",aaa);//-代表左对齐

    return 0;
}