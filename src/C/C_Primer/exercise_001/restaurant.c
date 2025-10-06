#include <stdio.h>

#define A1 20
#define A2 10
#define A3 15
#define A4 25
#define B1 20
#define B2 20
#define B3 15
#define B4 25
#define C1 20
#define C2 10
#define C3 15
#define C4 25//菜品价格

int main(void)

{   
    int id_number;//会员编号
    int people_number;//用餐人数
    int id_dishes;//菜品序号

    int all_price;
    //点单用的

    do
    {
        printf("请输入会员编号：");
        scanf("%d", &id_number);
        if (id_number == 2013456)
        {
            printf("欢迎光临！%d\n", id_number);

            printf("早餐时间:8:00-10:00\n");
            printf("A1 鸡蛋 20元\n");
            printf("A2 奶酪 10元\n");
            printf("A3 沙拉 15元\n");
            printf("A4 牛肉汤 25元\n");

            printf("午餐时间:11:00-13:00\n");
            printf("B1 牛肉烧烤 20元\n");
            printf("B2 猪肉烧烤 20元\n");
            printf("B3 鸡肉烧烤 15元\n");
            printf("B4 烧烤牛肉汉堡 25元\n");

            printf("晚餐时间:17:00-19:00\n");
            printf("C1 猪肉烧烤 20元\n");
            printf("C2 蔬菜猪肉烧烤 10元\n");
            printf("C3 猪排烧烤 15元\n");
            printf("C4 猪肉串 25元\n");//菜单展示


            printf("请输入用餐人数：");
            scanf("%d", &people_number);
            printf("用餐人数：%d\n", people_number);

            printf("请输入菜品序号：");
            scanf("%d", &id_dishes);
            printf("已购买%d,需要加菜吗?", id_dishes);//循环
            //x=x+y




            break;
        }
        else
        {
            printf("对不起，您不是会员！\n");
        }
    } while (1);//循环整个点单系统
    
    return 0;
}
//1.使用id登录系统，展示菜单
//2.输入用餐人数，用户进行点单
//3.结束点单循环，获取点单结果并计算总价
//4.打印小票
