#include <stdio.h>

int main()
{
    int vector = {7, 3, 0, 1, 3, 8, 2, 9};

    bubble(vector, 0);

    
}

void swap(int *a, int *b)
    {
        int aux = *a;
        *a = *b;
        *b = aux;
    }

    void bubble(int vector[], int size)
    {
        for (int i = 0; i < size - 1; ++i)
        {
            for (int j = 0; j < size; ++j)
            {
                if (vector[i] > vector[i + 1])
                {
                    swap(& vector[i], &vector[i + 1]);
                }
            }
        }
    }

void printvector(const int *vector, int size)
{
    
}