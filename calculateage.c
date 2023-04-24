#include<stdio.h>
int main()
{
    int age;
    printf("\nEnter age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("person is adult\n");
    }
    else if(age>13 && age<18)
    {
        printf("person is teenager\n");
    }
    else
    {
        printf("child");
    }
    printf("Thank you\n");
    return 0;
}