// Stucture vs Union:

//+--------------------------------------------------------------------------------------------------------------------+
//| Feature	           |                Structure	                   |               Union                           |
//| ------------------ |-----------------------------------------------|-----------------------------------------------|
//| Memory Allocation  |  Allocates memory for each member separately  |   Shares memory for all members               |
//|                    |                                               |                                               |
//| Size Calculation   |  Size includes the memory of all members	   |   Size is determined by the largest member    |
//|                    |                                               |                                               |
//| Access to Members  |  Members can be accessed individually	       |   Only one member can be accessed at a time   |
//|                    |                                               |                                               |
//| Memory Usage	   |  Can lead to higher memory consumption	       |   More memory-efficient for certain scenarios | 
//|                    |                                               |                                               |
//| Member             |  Members can be initialized separately	       |   Only one member can be initialized          |
//| Initialization	   |                                               |                                               |
//|                    |                                               |                                               |
//| Overhead	       |  Slightly more overhead due to                |   Lower overhead due to shared memory         |
//|                    |  individual memory allocation	               |                                               |
//|                    |                                               |                                               |
//| Use Cases	       |  Used when multiple distinct                  |   Used when multiple data members are used    |   
//|                    |  data members are needed	                   |   interchangeably or for memory optimization  |  
//+--------------------------------------------------------------------------------------------------------------------+

// Structure Example:
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p;
    p.x = 3;
    p.y = 5;

    printf("Point: (%d, %d)\n", p.x, p.y);   // access all in a time

    return 0;
}

// union Example:
#include <stdio.h>

union Number {
    int i;
    float f;
};

int main() {
    union Number num;
    num.i = 42;

    printf("Integer: %d\n", num.i);        // access only one at a time
    num.f = 3.14;

    printf("Float: %f\n", num.f);

    return 0;
}


// In the structure example, the Point structure contains two separate members x and y, and they occupy memory individually.
//  In the union example, the Number union shares memory between i and f, and only one member can be used at a time.