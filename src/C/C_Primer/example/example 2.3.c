// 一个文件中间包含两个函数
# include <stdio.h>
void apple(void);
int main (void)// 函数原型，告知程序中使用了这个函数
{
    printf("I will summon the butler function.\n");
    apple();//函数调用
    printf("Yes. Bring me some tea and writeable DVDs.\n");
    return 0;
}
void apple(void)//函数定义，源代码
{
    printf("You rang, sir?\n");
}