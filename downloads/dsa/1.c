#include <stdio.h>
#include <stdlib.h>
int a[50], n;
void create(int a[])
{
    printf("Enter the number of elements to create an array:\t");
    scanf("%d", &n);
    printf("\n Enter the elements to be inserted:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void display(int a[])
{
    printf("\nThe array elements are:\n");
    for (int i = 0; i < n; i++)
        printf("%d\n", a[i]);
}
void insert(int ele, int pos)
{
    n = n + 1;
    for (int i = n; i > pos - 1; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = ele;
}
void delete (int pos)
{
    int ele;
    if (pos > n)
    {
        printf("Invalid position !!!!!! Please enter the valid position");
    }
    else
    {
        ele = a[pos - 1];
        for (int i = pos - 1; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        n = n - 1;
    }
}
int main()
{
    int elem, pos, choice;
    while (1)
    {
        printf("\n*******************************\n");
        printf("\nEnter your choice : \n1.create\n2.display\n3.insert\n4.delete\n5.exit\n");
        printf("\n-----------------------------\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create(a);
            break;
        case 2:
            display(a);
            break;
        case 3:
            printf("Enter the element to be inserted:");
            scanf("%d", &elem);
            printf("\nEnter the position:");
            scanf("%d", &pos);
            insert(elem, pos);
            break;
        case 4:
            printf("\nEnter the position:");
            scanf("%d", &pos);
            delete (pos);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice!!!");
            break;
        }
    }
}
