#pragma once

#include <algorithm>
#include <iterator>

/**
 * @brief Single thread radix sort
 * 
 * @param first array first element pointer
 * @param last  array last element pointer
 */
void linearSort(int* first, int* last);

/**
 * @brief Single thread radix sort recursive algorithm stage
 * 
 * @param first array first element pointer
 * @param last  array last element pointer
 * @param order order of compared digit
 */
void linearSortStage(int* first, int* last, size_t order);

/**
 * @brief Function to swap negative elements of arrat with positive
 * 
 * @param first array last element pointer
 * @param last  order of compared digit
 */
void relocateNegatives(int* first, int* last);