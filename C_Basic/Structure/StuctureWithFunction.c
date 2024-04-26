// Stucture can be passed to function in 3 ways
// 1) passing individual members of structure to the function
// 2) passing entire stucture to the function
// 3) passing address of stucture to the function

#include<stdio.h>

// Method_1

// int display(int x ,int y);
// struct value
// {
//   int x;
//   int y;
// };
// int main()
// {
//   struct value a = {3,4};
//   display(a.x,a.y);     // 1) passing individual members of structure to the function
// }
// int display(int x, int y)
// {
//   int z=x+y;
//   printf("%d + %d = %d",x,y,z);
// }

// Method_2

// struct value
// {
//   int x;
//   int y;
// };

// int display(struct value a);  //Declaring Structure should be below struct declaration

// int main()
// {
//   struct value a = {3,4};
//   display(a);     // 2) passing entire stucture(variable) to the function
// }
// int display(struct value a)
// {
//   int z=a.x+a.y;
//   printf("%d + %d = %d",a.x,a.y,z);
// }

// Method_3

// struct value
// {
//   int x;
//   int y;
// };

// int display(struct value *a);  //Declaring Structure should be below struct declaration

// int main()
// {
//   struct value a = {3,4};
//   display(&a);     //3) passing address of stucture to the function
// }
// int display(struct value *a)
// {
//   int z=a->x+a->y;
//   printf("%d + %d = %d",a->x,a->y,z);
// }

