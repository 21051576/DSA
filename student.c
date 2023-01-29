#include<stdio.h>
struct Student{
    char name[50];
    int roll_no;
    int marks[5];
};
int main()
{
    struct Student s;
    printf("Enter the name of the student:\n");
    scanf("%s",&s.name);
    printf("Enter the roll no of the student\n");
    scanf("%d",&s.roll_no);
    printf("Enter the marksin five subjects one by one\n");
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&s.marks[i]);
        printf("\n");
    }
    printf("Displaying all the data of this structure:\n");
    printf("---------------------------------------\n");
    printf("NAME : %s\n",s.name);
    printf("ROLL NUMBER :%d\n: ",s.roll_no);
    for(i=0;i<5;i++)
    {
        printf("MARKS %d = %d ",i+1,s.marks[i]);
        printf("\n");
    }
    printf("THANK YOU");
    return 0;

}