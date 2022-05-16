#ifndef QUICKSORT_H
#define QUICKSORT_H
#include "Sort.h"
#include <vector>

class QuickSort: public Sort{
public:
   QuickSort();
   ~QuickSort() {};
   void exec(std::vector<int> &getsort, int, int);
private:
   int Split(std::vector<int> &getsort, int, int, int);
};
#endif