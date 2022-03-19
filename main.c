#include "stdio.h"
#include "stdlib.h"
#include "math.h"

int main(int argc, char const *argv[])
{
    // float r, d, l, s, m, v;
    // printf("请输入圆的半径");
    // scanf("%f", &r);
    // d = 2 * r;                      //直径
    // l = 2 * M_PI * r;               //周长
    // s = M_PI * r * r;               //圆面积
    // m = 4 * M_PI * r * r;           //表面积
    // v = (4 * M_PI * r * r * r) / 3; //体积
    // printf("直径=%.2f,周长=%.2f,圆面积=%.2f,圆球表面积=%.2f,圆球体积=%.2f\n", d, l, s, m, v);

    // int a, b;
    // printf("输入两个整数\n");
    // scanf("%d%d", &a, &b);
    // printf("交换前a= %d,b=%d\n", a, b);
    // int c;
    // c = a;
    // a = b;
    // b = c;
    // printf("交换后a= %d,b=%d\n", a, b);

    // int a = 1;
    // int b = 2;
    // int c = 3;
    // if (a++ <= ++b) //2  3
    // {
    //     a++;
    //     printf("真");
    // }
    // else
    // {
    //     printf("假");
    // }
    // printf("%d,%d,%d", a, b, c);
    // if (a != b + c) //3 3
    // {
    //     a++; //4 3 3
    //     printf("真");
    // }
    // else
    // {
    //     printf("假");
    // }
    // printf("%d,%d,%d", a, b, c);
    // if (b++ >= ++a) //3>=5
    // {
    //     a++; //
    //     printf("真");
    // }
    // else
    // {
    //     printf("假");
    // }

    // printf("%d,%d,%d", a, b, c);

    // int x, y = 0;
    // printf("输入x的值，计算出对应的y的值\n");
    // scanf("%d", &x);
    // if (x < -1)
    // {
    //     y = x + 1;
    // }
    // else if (x >= 0 && x < 1)
    // {
    //     y = sqrt(x);
    // }
    // else if (x >= 2)
    // {
    //     y = x * x + x + 1;
    // }

    // printf("y=%d\n", y);

    // int x = 0;
    // printf("%d\n", 3 || 1);
    // printf("%d", 3 || (x = 8 - 5 < !0));

    // int year = 0;
    // printf("输入年份\n");
    // scanf("%d", &year);
    // if (year % 4 == 0 && (year % 100 != 0) || (year % 400 == 0))
    // {
    //     /* code */
    //     printf("%d 为闰年", year);
    // }
    // else
    // {
    //     printf("%d 不为闰年", year);
    // }

    // int a = 1, b = 2, c = 3;
    // int m = b++ >= ++a ? 1 : 2; //2>(2-1) a++
    // printf("%d\n", m);

    printf("==============================================\n");
    for (int i = 1; i <= 9; i++)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            printf("%d * %d = %d\t", j, i, i * j);
        }
        printf("\n");
    }

    int num = 48;
    for (size_t i = 0; i < num; i++)
    {
        /* code */
        if (i == num / 2)
        {
            /* code */
            printf(" 99乘法表 ");
        }
        printf("===");
    }

    void printSplit();
    printf("\n");
    printSplit();

    for (int i = 9; i > 0; i--)
    {
        /* code */
        for (int j = 1; j <= i; j++)
        {
            printf("%d * %d = %d  \t", j, i, i * j);
        }
        printf("\n");
    }
    printf("==============================================\n");

    char str[] = "shenliangliang";
    printf("name= %s", str);
    int x = 0, y = 0;
    y = (x = 5, x + 2, x * 4);

    return 0;
}

void printSplit()
{
    int num = 48;
    for (size_t i = 0; i < num; i++)
    {
        /* code */
        if (i == num / 2)
        {
            /* code */
            printf(" 99乘法表 ");
        }
        printf("===");
    }

    printf("\n");
}
