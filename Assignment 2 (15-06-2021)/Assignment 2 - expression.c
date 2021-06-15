//15-06-2021, Assignment 2 - expression
#include<stdio.h>

int main()
{
    int a =2, b =1, x =0;
    x = (a++&&(!b)&&b||a);
    printf("%d\n",x);
}
//Output: 1