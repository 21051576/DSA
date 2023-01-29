#include<stdio.h>
#include<stdlib.h>
struct product
{
    int product_id;
    char product_name[50];
    int price;
    int quantity;
};
int main()
{
    int n;
    printf("Enter the limit:");
    scanf("%d",&n);
    struct product *p=(struct product*)calloc(n,sizeof(struct product));
    int i;
    for(i=0;i<n;i++)
    {
        printf("ENTER THE PRODUCT ID:\n");
        scanf("%d",&p[i].product_id);
        printf("ENTER THE PRODUCT NAME:\n");
        scanf("%s",&p[i].product_name);
        printf("ENTER THE PRICE OF THE PRODUCT:\n");
        scanf("%d",&p[i].price);
        printf("ENTER THE QUANTITY:\n");
        scanf("%d",&p[i].quantity);
    }
    printf("DISPLAYING ALL THE DETAILS OF THE PRODUCT:\n");
    printf("-----------------------------------\n");
    printf("PRODUCTID PRODUCTNAME PRICE QUANTITY\n");
    for(i=0;i<n;i++)
    {
        printf(" %d ",p[i].product_id);
        printf(" %s ",p[i].product_name);
        printf(" %d",p[i].price);
        printf(" %d ",p[i].quantity);
        printf("\n");
    }
    printf("-----------------------------------\n");
    return 0;
}