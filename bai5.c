#include<stdio.h>
#include<stdint.h>

    int i;
    int sum=5;
int main()
{

    do
    {
        printf("\nNhap i = ");
        scanf("%d", &i);
    }
    while(i < 0);
    {
    if(i==1)
        {
       
        printf( " so tien = %d000$", sum);
        }
    else if (1<i<31)
        {
        sum= sum+ 4*(i-1);
        printf( " so tien = %d000$", sum);
        }
    else
        {   
        sum=sum+4*29+3*(i-30);
        printf( " so tien = %d000$", sum);
        }
    }
return 0;
}
