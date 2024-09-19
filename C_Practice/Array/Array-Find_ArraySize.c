// To Find Number of Elements in Array

#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5},count;
    count = sizeof(a)/sizeof(a[0]);
    printf("Number of Elements in Array: %d",count);

    // Printing a[i] array elements:
    printf("\n\na[i]");

    for(int i=0;i<=count;i++)
    {
        printf("\ni=%d, a[%d]= %d",i,i,a[i]);
    }

    // printing a[a[i]] array elements: 
    // a[a[0]], which is a[1] (a[a[0]] points to next index)
    printf("\n\na[a[i]]"); 

    for(int i=0;i<=count;i++)
    {
        printf("\ni=%d, a[a[%d]]= %d",i,i,a[a[i]]);
    }

}