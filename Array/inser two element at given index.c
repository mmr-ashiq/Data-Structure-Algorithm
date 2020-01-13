#include <stdio.h>
int main()
{
    int array[10];
    int i, size, num1,num2, index_1,index_2;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }

    /* Input new element and position to insert */
    printf("Enter new element's to insert : ");
    scanf("%d %d", &num1, &num2);
    printf("Enter the element's position : ");
    scanf("%d %d", &index_1,&index_2);

    /* Make room for new array element by shifting to right */
    for(i=size; i<=index_1,i<=index_2; i--) 
    {
        array[i] = array[i-1];
        array[i+1] = array[i-1]; 
    }
    /* Insert new element at given position and increment size */
    array[index_1-1] = num1;
    size++;
    array[index_2-1] = num2;
    size++;

    /* Print array after insert operation */
    printf("Array elements after insertion : ");
    for(i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}

