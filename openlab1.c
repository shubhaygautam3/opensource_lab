#include<stdio.h>
#include<conio.h>
int main()
{
    int i, arr[10], search, f, l, mid;
    printf("Enter 10 elements (in ascending order): ");
    for(i=0; i<10; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter element to be search: ");
    scanf("%d", &search);
    f = 0;
    l = 9;
    mid = (f+l)/2;
    while(f <= l)
    {
        if(arr[mid]<search)
            f = mid+1;
        else if(arr[mid]==search)
        {
            printf("\nThe number, %d found at Position %d", search, mid+1);
            break;
        }
        else
            l = mid-1;
        mid = (f+l)/2;
    }
    if(f>l)
        printf("\nThe number, %d is not found in given Array", search);
    getch();
    return 0;
}
