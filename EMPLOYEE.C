#include<stdio.h>
typedef struct {
 int id;
 char name[20];
 int age;
 int bs;
 int gs;
} emp;

void empinfodisplay(emp *x, int y){
 printf("EmpID\t\tEmpName\t\tAge\t\tBasic Salary\t\tGross Salary\n");
 int k;
 for(k = 0 ; k < y ; k++){
    printf("%d\t\t%s\t\t%d\t\t%d\t\t\t%d",(*(x+k)).id,(*(x+k)).name,(*(x+k)).age,(*(x+k)).bs,(*(x+k)).gs);
    printf("\n");
 }
}

int main(){
 int n; 
 printf("Enter number of employees: ");
 scanf("%d",&n);
 emp e[n];
 int i; 
 for(i = 0 ; i < n ; i++){
    printf("Enter employee id: ");
    scanf("%d",&e[i].id);
    printf("Enter name of the employee: ");
    scanf(" %[^\n]s",e[i].name); 
    printf("Enter age of the employee: ");
    scanf("%d",&e[i].age); 
    printf("Enter the basic salary: ");
    scanf("%d",&e[i].bs);
 } 
 for(i = 0 ; i < n ; i++){
    int da = 0.8 * e[i].bs;
    int hra = 0.1 * e[i].bs; 
    e[i].gs = e[i].bs + da + hra;
 } 
empinfodisplay(&e[0],n); 
return 0;
}