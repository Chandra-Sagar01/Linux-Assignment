//15-06-2021 Assignment 2 - local variable
#include<stdio.h>

int main()
{
    int x =10, y =3;
    {
        int x =100, z = 10;
        printf("%d %d\n",x,z);
    }
    printf("%d %d\n",x,z);
}
//Output: error: ‘z’ undeclared (first use in this function) at line 11
 //printf("%d %d\n",x,z);
   //                 ^