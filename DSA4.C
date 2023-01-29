#include<stdio.h>
struct student
{
    char name[50];
    int stu_id;
    int stu_rollno;
    int marks[5];
};
struct student s[5];
void input()
{
    printf("ENTER THE NAME :\n");
    scanf("%s",&s.name);
    printf("ENTER THE STUDENT ID:\n");
    scanf("%d",&s.stu_id);
    printf("ENTER THE ROLL NO:\n");
    scanf("%d",&s.stu_rollno);
    int i;
    printf("ENTER THE MARKS IN FIVE SUBJECTS:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);
        printf("\n");
    }
}
void display()
{
    printf("STUDENT NAME:%s\n",s.name);
    printf("STUDENT ID:%d\n",s.stu_id);
    printf("DISPLAYING THE MARKS:\n");
    int j;
    for(j=0;j<5;j++)
    {
        printf("%d ",s.marks[j]);
    }
}
int main()
{
    
}