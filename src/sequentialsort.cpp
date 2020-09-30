#include "sequentialsort.h"
#include <iostream>

void sequentialSort(int* first, int* last)
{
    for (size_t i = 0; i < sizeof(int); i++)
    {
        size_t size = last - first + 1;
        size_t count[256] = {};
        for (int* j = first; j <= last; j++)
        {
            count[*((unsigned char*) j + i)]++;
        }
        size_t offset[256] = {};
        for (size_t j = 1; j < 256; j++)
        {
            offset[j] = offset[j - 1] + count[j - 1];
        }
        int* temp = new int[size];
        for (int* j = first; j <= last; j++)
        {
            temp[offset[*((unsigned char*) j + i)]++] = *j;
        }
        memcpy(first, temp, size * sizeof(int));
    }
}