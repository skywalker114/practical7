#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <vector>

class QuickSort: public Sort{
public:
   QuickSort();
   ~QuickSort() {};
   void sort(std::vector<int> &getsort, int, int);
private:
   int Split(std::vector<int> &getsort, int, int, int);
};
#endif