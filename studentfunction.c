#include<stdio.h>
struct Student{
    char name[50];
    int rollno;
    int marks[5];
};
void percentage(struct Student *s)
int main()
{
    int n;
    struct Student s[n];
    printf("enter the limit\n");
    scanf("%d",&n);
    int i,j;
    printf("Enter the required data of the students\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the name:\n");
        scanf("%s",&s[i].name);
        printf("Enter the roll number:\n");
        scanf("%d",&s[i].rollno);
        printf("Enter the five marks :\n");
        for(j=0;j<5:j++)
        {
            scanf("%d",s[i].marks[j]);
        }

    }


}