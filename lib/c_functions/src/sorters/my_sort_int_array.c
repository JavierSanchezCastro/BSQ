/*
** EPITECH PROJECT, 2020
** my_sort_int_array
** File description:
** Sort an Integer Array
*/

int *compare_array(int j, int *array)
{
    int aux = 0;

    if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
    }
    return (array);
}

void my_sort_int_array(int *array, int size)
{
    int i = 0;
    int j = 0;

    while (i < size) {
        j = 0;
        while (j < size - i - 1) {
            array = compare_array(j, array);
            j++;
        }
        i++;
    }
}