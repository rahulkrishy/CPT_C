// Contact List Management System 

#include<stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct contact 
{
  char name[50];
  char phone[20];
  char email[50];
};

void addContact(struct contact contacts[],int *count);
int searchContact(struct contact contacts[],int count,char searchName[]);
void updateContact(struct contact *contacts);
void deleteContact(struct contact contacts[],int *count,int index);
void displayContact(struct contact contacts[],int count);

int main()
{
  int choice,contact_count = 0;
  struct contact contacts[MAX_CONTACTS];

  printf("\nContact List Management System ");
  while(1)
  {
    printf("\n\n    --Menu--   ");
    printf("\n 1. Add Contact");
    printf("\n 2. Search Contact");
    printf("\n 3. Update Contact");
    printf("\n 4. Delete Contact");
    printf("\n 5. Display Contact");
    printf("\n 0. Close");
    printf("\nEnter your Choice: ");
    scanf("%d",&choice);
  
    switch (choice)
    {
     case 0:
     {
        printf("\nExiting...\nContact List Management System closed");
        return 0;
     }
     
    case 1:
      {
        printf("\n--1.Add Contact--");
        addContact(contacts,&contact_count);
        break;
      }
      
    case 2:
    {
      printf("\n--2.Search Contact--");
      char searchName[50];
      int index;
      printf("\n Enter Name to search: ");
      scanf("%s", searchName);
      index = searchContact(contacts,contact_count,searchName);
      if (index != -1)
      {
        printf("\nContact Found at %d",index+1);
        printf("\nName: %s, Phone: %s, Email: %s\n",contacts[index].name,contacts[index].phone,contacts[index].email);
      }
      else
      {
        printf("\nContact Not Found.");
      }
      break;
    }
      
    case 3:
    {
      printf("\n--3.Update Contact--");
      char searchName[50];
      int index;
      printf("\n Enter Name to search: ");
      scanf("%s", searchName);
      index = searchContact(contacts,contact_count,searchName);
      if (index != -1)
      {
        updateContact(&contacts[index]); 
      }
      else
      {
        printf("\nContact Not Found.");
      }
      break;
    }

    case 4:
      {
        printf("\n--4.Delete Contact--");
        char searchName[50];
        int index;
        printf("\n Enter Name to search: ");
        scanf("%s", searchName);
        index = searchContact(contacts,contact_count,searchName);
        if (index != -1)
        {
          deleteContact(contacts,&contact_count,index);
        }
        else
        {
          printf("\nContact Not Found.");
        }
        break;
      }

    case 5:
    {
      printf("\n--5.Display Contact--");
      displayContact(contacts,contact_count);
      break;
    }

     default:
      printf("\nInvalid Choice..Try again");
      break;
    }
  }
  return 0;
}

void addContact(struct contact contacts[],int *count)
{
 if (*count < MAX_CONTACTS)
 {
    struct contact newContact;
    printf("\nName : ");
    scanf("%s",newContact.name);
    printf("Phone Number : ");
    scanf("%s",newContact.phone);
    printf("Email : ");
    scanf("%s",newContact.email);

    contacts[*count] = newContact;
    (*count)++;
    printf("\nContact added successfully!");
 }
 else
    printf("Contact List is Full!");
}

int searchContact(struct contact contacts[],int count,char searchName[])
{
  for(int i=0;i<count;i++)
  {
    if(strcmp(contacts[i].name,searchName)==0)
    {
      return i;
    }
  }
  return -1;
}

void updateContact(struct contact *contacts)
{
  printf("Enter new Name: ");
  scanf("%s",contacts->name); 
  printf("Enter new phone number: ");
  scanf("%s",contacts->phone);
  printf("Enter new Email: ");
  scanf("%s",contacts->email);
  printf("Contact updated successfully!\n");
}

void deleteContact(struct contact contacts[],int *count,int index)
{
  for(int i=index;i<*count;i++)
  {
    contacts[i] = contacts[i+1];
  }
  (*count)--;
  printf("\nContact deleted successfully!");
}

void displayContact(struct contact contacts[],int count)
{
  if (count == 0)
    printf("\nNo Contacts Stored.Please add Contact details to display!");
  else
  {
    for(int i=0;i<count;i++)
    {
      printf("\n%d. Name: %s, Phone: %s, Email: %s\n",i+1,contacts[i].name,contacts[i].phone,contacts[i].email);
    }
  }
}