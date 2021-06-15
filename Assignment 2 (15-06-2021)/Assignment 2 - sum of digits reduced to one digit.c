//15-06-2021, Assignment 2, sum of digits reduced to one digit
#include<stdio.h>

int sum_of_digits(long int num)
{
    long int sum = 0; long int rem = 0;
    if(num>9)
    {
        while(num != 0)
        {
            rem = num%10;
            sum = sum+rem;
            num = num/10;
        }
        printf("sum of digits = %ld\n",sum);
        return sum_of_digits(sum);
    }
    else
    {
        return num;
    }
}

int main()
{
    long int num = 0;
    int result = 0;
    
    printf("Enter an integer:\n");
    scanf("%ld",&num);
    
    result = sum_of_digits(num);
    printf("sum of digits reduced to one digit is %d\n",result);
}
/*Output:
Enter an integer:
12344
sum of digits = 14
sum of digits = 5
sum of digits reduced to one digit is 5
*/