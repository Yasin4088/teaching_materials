#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    printf("请输入a的值：");
    scanf("%d", &a);
    printf("请输入b的值：");
    scanf("%d", &b);

    c = a + b;

    printf("相加为：c = %d\n", c);

    return 0;
}