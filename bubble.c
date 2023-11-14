#include <stdio.h>
int main()
{
    int a[10], size, i, j, temp;

    printf("\n enter the size of the array  :  ");
    scanf("%d", &size);

    printf("\n Please Enter the Array Elements  :  ");
    for(i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < size - 1; i++)
    {
        for(j = i+1; j < size- i - 1; j++)

            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }printf("\nListSortedindescending Order:");
    for(i = 0; i < size; i++)
    {
        printf(" %d \t", a[i]);
    }

return 0;
}