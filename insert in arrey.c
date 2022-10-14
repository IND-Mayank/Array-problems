#include<stdio.h>
void insert();
int a[10],n,loc,item;
int main()
{
    int i;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the location of insertion");
    scanf("%d",&loc);
    printf("enter the item");
    scanf("%d",&item);
    insert();
    printf("after inserting");
    for(i=0;i<n;i++);
    printf("%d",a[i]);
    return 0;
}
void insert()
{
    int i=n-1;
    while (i>=loc-1)
    {
        a[i+1]=a[i];
        i--;
    }
    a[loc-1]=item;
    n++;
}
