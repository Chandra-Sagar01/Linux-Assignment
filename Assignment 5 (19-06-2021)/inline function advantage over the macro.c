//Write a simple c program to demonstrate inline function advantage over the macro.

//consider the below code where a square of a number function is written in macro style and inline function style
#include <stdio.h>

#define SQR(num) num*num

static inline int sqr(int num)
{
    return num*num;
}
int main()
{
    int num;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    printf("square in inline function : %d\n",sqr(++num));
    printf("square in macro function : %d\n",SQR(++num));// In pre-processor stage SQR(++num) 
                                                            // will be expanded as ++num*++num
}
/*Output:
Enter an integer:
5
square in inline function : 36
square in macro function : 56
*/

//In inline function the num value is passed as 6 (sqr(6)) and calculation happens as (6)*(6) resulting in 36
//In Macro function the argument is passes as SQR(++num) which will be calculated as(++num)*(++num) = (++6)*(++num) = (7)*(8) = 56
//Macro function will blindly take in increment operation and multiply the increment operation of the values and not the value directly
//where as the inline function takes only the value passed