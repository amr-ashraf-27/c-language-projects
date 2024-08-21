#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int numbers[] = {5,6,8,2,0,6,7};
    for (int n = 0; n < 7; n++)
    {
        if (numbers[n] == 10)
        {
            printf("found in %i steps\n", n + 1);
            return 0;
        }
    }
     printf("not found\n");
     return 1;

}










 int n;
    int *array;

    do
    {
        printf("Enter array length: ");
        scanf("%d", &n);
    }
while (n <= 0);

    array = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nCurrent values:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] > 0)
        {
            array[i] = 1;
        }
        else if (array[i] < 0)
        {
            array[i] = -1;
        }
    }

    printf("\n\nNew values:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }







