# include <stdio.h>
# include <string.h>
#define DEFINE 62.4//人体密度（镑/立方英尺）

int main()
{
   float weight, volume;
   int size, letters;
   char name[40];//name是一个数组，可以容纳40个字符

   printf("What is your first name? ");
   scanf("%s", name);
   printf("What is your last name? ");
   scanf("%s", &name[strlen(name)]);

   size = sizeof name;
   letters = strlen(name);
   volume = size / DEFINE;
   printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
   printf("Also, your first name has %d letters,\n", letters);
   printf("and we have %d bytes to store it.\n", size);

   return 0;
}