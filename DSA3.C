#include<stdio.h>
struct student
{
    char name [50];
    int stu_id;
    int stu_rollno;
    int marks[5];
};
struct student s[3];
void input()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("ENTER THE NAME :\n");
        scanf("%s",&s[i].name);
        printf("ENTER THE STUDENT ID:\n");
        scanf("%d",&s[i].stu_id);
        printf("ENTER THE ROLL NO:\n");
        scanf("%d",&s[i].stu_rollno);
        int j;
        printf("ENTER THE MARKS IN FIVE SUBJECTS:\n");
        for(j=0;j<5;j++)
        {
         scanf("%d",&s[i].marks[j]);
         printf("\n");
        }
    
    }
}
void display()
{
    int i;
    for(i=0;i<3;i++)
    { 
        printf("STUDENT NAME:%s\n",s[i].name);
        printf("STUDENT ID:%d\n",s[i].stu_id);
        printf("STUDENT ROLL NO:%d\n",s[i].stu_rollno);
        printf("DISPLAYING THE MARKS:\n");
        int j;
        for(j=0;j<5;j++)
        {

          printf("%d ",s[i].marks[j]);
        }
    }
}
int main()
{
    int choice;
    char ch;
    printf("ENTER YOUR CHOICE 1 FOR INPUT OR 2 FOR DISPLAY\n");
    do
    {
       scanf("%d",&choice);
       switch(choice)
    {
        case 1:
        input();
        break;
        case 2:
        display();
        break;
        default:
        printf("INVALID CHOICE");
    } printf("do you want to continue?\n");
    printf("enter y if yes and n if no\n");
    scanf(" %c",&ch);
    } while(ch=='y');
    return 0;   

}