#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch{
public:
   RecursiveBinarySearch();
   ~RecursiveBinarySearch() {};
   int boolSearch(std::vector<int> &toSearch, int key, int lower, int upper);
private:
};
#endif