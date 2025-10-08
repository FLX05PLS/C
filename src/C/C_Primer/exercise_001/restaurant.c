#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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
    char id_dishes[3];//菜品序号
    int all_price=0;
    int input;//是否继续点单
    bool flag;

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


            do
            {
                printf("\n请输入菜品序号(如A1):");
                scanf("%s", id_dishes);

                if (strcmp(id_dishes, "A1") == 0) all_price += A1;
                else if (strcmp(id_dishes, "A2") == 0) all_price += A2;
                else if (strcmp(id_dishes, "A3") == 0) all_price += A3;
                else if (strcmp(id_dishes, "A4") == 0) all_price += A4;
                else if (strcmp(id_dishes, "B1") == 0) all_price += B1;
                else if (strcmp(id_dishes, "B2") == 0) all_price += B2;
                else if (strcmp(id_dishes, "B3") == 0) all_price += B3;
                else if (strcmp(id_dishes, "B4") == 0) all_price += B4;
                else if (strcmp(id_dishes, "C1") == 0) all_price += C1;
                else if (strcmp(id_dishes, "C2") == 0) all_price += C2;
                else if (strcmp(id_dishes, "C3") == 0) all_price += C3;
                else if (strcmp(id_dishes, "C4") == 0) all_price += C4;
                else 
                {
                    printf("菜品序号输入错误，请重新输入！\n");
                    continue;//输入错误，重新输入
                }

                printf("已购买%s,需要加菜吗?", id_dishes);
                printf("是否继续加菜？(1=是,0=否)");
                scanf("%d", &input);
                flag = input;
                
                if (!flag) 
                {
                    printf("点单结束！\n");
                    break;
                }              

            } while (1);//循环点单
            

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
 //需要计算总价，需要注意，菜品序号是字符串，需要转变为数字