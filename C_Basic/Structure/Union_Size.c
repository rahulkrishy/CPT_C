#include <stdio.h>
#include <stdint.h>

struct person1 {
 char name[20];
 int number;
 double weight;
}data1;

union person2{
 char name[20];
 int number;
 double weight;
}data2;

int main(){
 printf("size of data1: %d", sizeof(data1)); //20+4+8 = 32
 printf("size of data2: %d", sizeof(data2)); //24 bytes (to meet the 8-byte alignment requirement from double)
}


/*
Size of Union: 

Alignment Requirements
Alignment of char name[20]:
This array occupies 20 bytes. Since char typically has no special alignment requirements, char name[20] does not add additional alignment constraints.
Alignment of int number:
An int typically has a 4-byte alignment requirement. This means that the starting address of the integer should be a multiple of 4.
Alignment of double weight:
A double typically has an 8-byte alignment requirement. This means that the starting address of the double should be a multiple of 8.

Padding for Alignment
To align a size of 20 bytes to the next multiple of 8:

The next multiple of 8 after 20 is 24.
Thus, the size of the union will be:

Size of the largest member: 20 bytes
Aligned size: 24 bytes (to meet the 8-byte alignment requirement)
Therefore, the size of union person2 will be 24 bytes to ensure proper alignment for the double member.
*/
