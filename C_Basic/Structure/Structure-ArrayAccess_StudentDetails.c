// Structure Array to store and access the student class details (rollNo,name,mark,percentage) and check for student name in list

#include<stdio.h>
#include<string.h>

// Structure Declaration
struct joinDate
{
  int day;
  int month;
  int year;
};

struct student            
{
  int rollNo;
  char name[50];
  struct joinDate doa;  //nested structure declaration
  int mark[5];
  int sum;
  float per;
};

int main()
{
  struct student stu[50];
  int num,i,j,sflag=0;
  char sname[50];

  printf("\nEnter number of students: ");
  scanf("%d",&num);

  // Storing Student Details:
  for(i=0;i<num;i++)
  {
    printf("Enter %d - Student 'RollNo' 'Name' 'DateOfAdmission':\n",i+1);
    scanf("%d%s%d%d%d",&stu[i].rollNo,stu[i].name,&stu[i].doa.day,&stu[i].doa.month,&stu[i].doa.year);
    printf("\nEnter %d-%s Student 5 subject marks:\n",stu[i].rollNo,stu[i].name);
    stu[i].sum = 0;
    stu[i].per = 0;
    for(j=0;j<5;j++)
    {
      scanf("%d",&stu[i].mark[j]);
      stu[i].sum += stu[i].mark[j];
    }
    stu[i].per = (stu[i].sum)/5;
  }

  // Printing Student Details: 
  printf("\nStudent Details: \n");
  printf("'S.No' 'RollNo' 'Name' 'DateOfAdmission' 'Total' 'Percentage' :\n");
  for(i=0;i<num;i++)
  {
    printf("%1d\t %2d\t %4s\t %d/%d/%d\t %3d\t %4f\n",i+1,stu[i].rollNo,stu[i].name,stu[i].doa.day,stu[i].doa.month,stu[i].doa.year,stu[i].sum,stu[i].per);
  }

  // Searching Student Details: 
  printf("\nEnter Student name to be Searched: ");
  scanf("%s",sname);

  for(i=0;i<num;i++)
  {
    if(strcmp(stu[i].name,sname)==0)
    {
      sflag = 1;
      break; 
    } 
  }
  if (sflag == 1)
    printf("StudentName: %s is Found",sname);
  else
    printf("StudentName: %s is Not Found",sname);
}