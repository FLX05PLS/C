# include <stdio.h>
# define PRAISE "你是个好人"

int main(void)
{
    char name[40];

    printf("你的名字是什么?\n");
    scanf("%s", name);
    printf("你好, %s, %s\n", name, PRAISE);

    return 0;
}