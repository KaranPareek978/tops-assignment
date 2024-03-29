#include <stdio.h>

// Here we are implementing Insertion sort
void insertionSort(int array[], int size)
{
    int i, target, j;
    for (i = 1; i < size; i++)
    {
        target = array[i];
        j = i - 1; /* Here the elements in b/w arrary[0 to i-1] which are greater than target are moved ahead by 1 position each*/
        while (j >= 0 && array[j] > target)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = target;
    }
}

/* Function to print array */
void display(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Main function to run the program
int main()
{
    int array[] = {50, 30, 10, 90, 80, 20, 40, 70};
    int size = sizeof(array) / sizeof(array[0]);

    insertionSort(array, size);

    display(array, size);
    return 0;
}
