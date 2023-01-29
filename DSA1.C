//Write a program to create a structure to store product information like product id ,name ,price, quantity,and display information of a single product
#include <stdio.h>
struct product
{
    int product_id;
    char product_name[50];
    int price;
    int quantity;
};
int main()
{
    struct product p;
    printf("ENTER THE PRODUCT ID:\n");
    scanf("%d",&p.product_id);
    printf("ENTER THE PRODUCT NAME:\n");
    scanf("%s",&p.product_name);
    printf("ENTER THE PRICE OF THE PRODUCT:\n");
    scanf("%d",&p.price);
    printf("ENTER THE QUANTITY:\n");
    scanf("%d",&p.quantity);
    printf("DISPLAYING ALL THE DETAILS OF THE PRODUCT:\n");
    printf("-----------------------------------\n");
    printf("PRODUCT ID : %d\n",p.product_id);
    printf("PRODUCT NAME : %s\n",p.product_name);
    printf("PRODUCT PRICE : %d\n",p.price);
    printf("PRODUCT QUANTITY : %d\n",p.quantity);
    printf("-----------------------------------\n");
    return 0;
}