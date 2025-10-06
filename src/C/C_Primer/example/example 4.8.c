# include <stdio.h>
int main(void)
{
    const double RENT=3852.99;

    printf("*%f*\n",RENT);
    printf("*%e*\n",RENT);
    printf("*%4.2f*\n",RENT);//总宽度4,小数点后2位
    printf("*%10.3f*\n",RENT);//总宽度10,小数点后3位
    printf("*%10.3e*\n",RENT);//总宽度10,小数点后3位
    printf("*%10.3E*\n",RENT);//总宽度10,小数点后3位

    printf("%x %X %#x\n",31,31,31);//十六进制输出

    
    return 0;
}
//浮点数的格式化输入输出
//%f 以小数形式输出浮点数
//%e 以科学计数法形式输出浮点数
//%E 以科学计数法形式输出浮点数，指数部分用E表示
//%g 根据数值的大小自动选择%f或%e格式输出浮点数
//%G 根据数值的大小自动选择%f或%E格式输出浮点数
