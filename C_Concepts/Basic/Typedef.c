// 'typedef' -  is a keyword that allows you to create an alias or a new name for an existing data type:

#include<stdio.h>

// Normal
int main()
{
    typedef int integer;
    integer a=10,b=20;
    printf("a=%d, b=%d",a,b);
}

// in Structure:
// struct data
// {
//     int a;
//     int b;
// };

// int main()
// {
//     typedef struct data value;
//     value num={10,20};
//     printf("\nvalue 1: %d, value 2: %d",num.a,num.b);
// }