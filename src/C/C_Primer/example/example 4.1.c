# include <stdio.h>
# include <string.h>
#define DEFINE 62.4//人体密度（镑/立方英尺）

int main()
{
   float weight, volume;
   int size, letters;
   char name[40];//name是一个数组，可以容纳40个字符

   printf("你的名字是什么? ");
   scanf("%s", name);
   printf("你的姓氏是什么? ");
   scanf("%s", &name[strlen(name)]);

   size = sizeof name;
   letters = strlen(name);
   volume = size / DEFINE;
   printf("好的, %s，你的体积是 %2.2f 立方英尺\n", name, volume);
   printf("你的名字有 %d 个字母,\n", letters);
   printf("我们使用 %d 个字节去存储他\n", size);

   return 0;
}