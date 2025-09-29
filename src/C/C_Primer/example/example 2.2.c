// fathm_ft.c 把英寻转换为英尺
#include <stdio.h>
int main(void)
{
    int feet, fathoms;
    fathoms = 2;
    feet = fathoms * 6;
    printf("there are %d feet in %d fathoms!\n", feet, fathoms);
    printf("yes, I said %d feet!\n", 6*fathoms);

    return 0;
}