//Write a menu based program to create an array and perform the following operations
//1: Traverse \n2:insert \n3:deletion \n 4:searching \n5:sorting \n6:Merging
#include<stdio.h>
int n;
void display(int *a)
{
  printf("Elements are:\t");
  for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void insert(int *a,int key, int index)
{
  for(int j=n-1;j>=index;j--)
    a[j+1]=a[j];
  a[index]=key;
  n=n+1;
  traverse(a);
}
void delete(int *a, int index)
{
  for(int j=index;j<n-1;j++)
    p[j]=p[j+1];
  printf("%d elemet deleted\n",p[index]);
  n=n-1;
  traverse(a);
}
void saerch(int *a,int a,int index)
{
    for(int i=0;i<index;i++)
    {
        if(a[i]==a)
        {
            flag++;
            break;
        }
    }
    if (flag==1)
    {
        printf("elemnt is present\n");
    }
    else{
        printf("element not present:\n");
    }
}
int main()
{
  int option,ele,pos;
  char ch;
  printf("Enter size of array");
  scanf("%d",&n);
  int list[50];
  printf("Enter array elements");
  for(int i=0;i<n;i++)
    scanf("%d",&list[i]);
  do
  {
  printf("\nMenu\n");
  printf("1: Traverse \n2:insert \n3:deletion \n 4:searching \n5:sorting \n6:Merging\n");
  printf("Enter your choice");
  scanf("%d",&option);
  
    switch(option)
    {
      case 1:traverse(list);
              break;
      case 2:printf("Enter element and position");
             scanf("%d %d",&ele,&pos);
             insert(list,ele,pos);
             break;
      case 3:printf("Enter position");
             scanf("%d",&pos);
            delette(list,pos);
              break;
      case 4:search(list,ele);
        
              break;
      case 5:sort(list);
              break;*/
      default:printf("Invalid option");
    }
    printf("Do you want to continue");
    scanf(" %c",&ch);
  }while(ch=='y');
  return 0;
}