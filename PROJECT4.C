#include<stdio.h>

struct student
{
 char name[20];
 int rollno;
 float marks;
 char city[20];
 char dream[20];
};
 void read(struct student s[],int n)
 {
 int i;
 for(i=0;i<n;i++)
 {
 printf("\n enter the name:");
 scanf("%s",s[i].name);
 printf("enter the roll number:");
 scanf("%d",&s[i].rollno);
 printf("enter the marks:");
 scanf("%f", &s[i].marks);
 printf("enter the city:");
 scanf("%s",s[i].city);
 printf("enter the dream:");
 scanf("%s",s[i].dream);
 }
}
 void display (struct student s[],int n)
 {
 int i;
 printf("\n----students details----\n");

 for(i=0;i<n;i++)
 {
 printf("student %d\n",i+1);
 printf("student name: %s\n",s[i].name);
 printf("student roll: %d\n",s[i].rollno);
 printf("student marks: %f\n",s[i].marks);
 printf("student city: %s\n",s[i].city);
 printf("student dream: %d\n",s[i].dream);
 }
}
 int main()
{
 struct student s[10];
 read(s,10);
 display(s,10);
 return 0;

}

