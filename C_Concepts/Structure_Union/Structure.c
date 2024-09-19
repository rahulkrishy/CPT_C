// Structure basic

#include<stdio.h>

struct student                 // Structure declaration
{
  int rollNo;
  char name[50];
  int grade;
};

struct student a = {1,"chittesh",9},b;     // variable assigning and initialization


int main()
{
  printf("Student A:");           // Printing the assigned values for student a
  printf("\nRollNo: %d",a.rollNo);
  printf("\nName: %s",a.name);
  printf("\nGrade: %d",a.grade);
  printf("\n\nStudent B:");      // Assigning values and printing for student b
  printf("\nRollNo:");
  scanf("%d",&b.rollNo);
  printf("Name:");
  scanf("%s",&b.name);
  printf("Grade: ");
  scanf("%d",&b.grade);
  printf("\nRollNo: %d",b.rollNo);
  printf("\nName: %s",b.name);
  printf("\nGrade: %d",b.grade);
}