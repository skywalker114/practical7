#include <vector>
#include "RecursiveBinarySearch.h"
#include <math.h>
using namespace std;

bool RecursiveBinarySearch::search(std::vector<int> list, int number)
{
    if (list.size() == 0 || (list.size() == 1) && (list[0] != number)) return false;
    int midpoint = floor(list.size()/2);
    if(list[midpoint] == number) return true;
    else if(list[midpoint] > number)
    {
        std::vector<int> left(list.begin(), list.begin() + midpoint);
        return search(left, number);
    }
    std::vector<int> right(list.begin() + midpoint, list.end());
    return search(right, number);
};