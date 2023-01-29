#include<stdio.h>
void search(int *y,int n,int b)
{
    int i,flag;
    for(i=0;i<n;i++)
    {
        if(y[i]==b)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("number is present\n");
    }
    else{
        printf("Sorry number not present\n");
    }
}
void sort(int *x,int n1)
{
    int i,j,temp;
    for(i=0;i<n1-1;i++)
    {
        for(j=0;j<n1-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("printing the sorted array:\n");
    for(i=0;i<n1;i++)
    {
        printf("%d ",x[i]);
    }
}
int main()
{
    int k;
    printf("enter the limit:\n");
    scanf("%d",&k);
    int a[k];
    int i;
    printf("enter the elements :\n");
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter your choice 1 for search 2 for sort:\n");
    int m;
    scanf("%d",&m);
    switch(m)
    {
        case 1:;
        int c;
        printf("enter the numberr to be searched\n");
        scanf("%d",&c);
        search(a,k,c);
        break;
        case 2:
        sort(a,k);
        break;
        default:
        printf("sorry wrong choice\n");
    }
    return 0;
}
