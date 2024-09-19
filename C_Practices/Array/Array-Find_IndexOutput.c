// Array-Find Index output

#include<stdio.h>

int main()
{
    int a[]={3,4,5,6,7,8,9,10,11,12,13,14};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=1;i<n;i++)
    {
        printf("\ni=%d",i);
        printf("\n\na[%d]=%d",i,a[i]);
        printf("\na[%d+1]=%d",i,a[i+1]);
        printf("\na[%d-1]=%d",i,a[i-1]);

        int b = a[i]+1;
        printf("\na[%d]+1=%d",i,b);

        int c = a[i]-1;
        printf("\na[%d]-1=%d",i,c);
        
        printf("\na[a[%d]+1]=%d",i,a[a[i]+1]);
        printf("\na[a[%d]-1]=%d",i,a[a[i]-1]);

        printf("\n");
    }

    
}