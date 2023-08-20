#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>


int main6(void)
{
    //这段代码代表整数上溢的意思
    //上溢的意思是:当达到它能表达的最大值时,会重新从起点开始
    //int的值起点是从-2147483648 开始  相当于就是从负号开始
    //int值要是溢出的话,系统是不会提醒的
    int  max = 2147483647;
    printf("%d,%d\n", max, max + 1);
    //在和段代码代表着浮点数的上溢的意思
    //浮点数上溢的话会显示inf 或者infinity 或者具有无穷含义的其他内容.


    float  max1 = 3.40e38;
    printf("%f\n%f\n", max1, max1 * 10);
    //这段代码代表浮点数的下溢
    //下溢的意思是,低于正常的浮点值.
    //如果下溢的值非常大的话, 显示的结果是为0

    float  max2 = 0.1234;
    printf("%f\n%f\n", max2, max2 / 10);
    printf("%f\n%f\n", max2, max2 / 10e10);

    return 0;
}
