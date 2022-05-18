#include <vector>
#include "QuickSort.h"
using namespace std;

std::vector<int> QuickSort::sort(vector<int> list){
    if (list.size() <= 1) return list;
    int pivot = list[0];
    std::vector<int> less;
    std::vector<int> greater;
    for (int i=1; i < list.size(); i++)
    {
        if (list[i]<pivot) less.push_back(list[i]);
        else greater.push_back(list[i]);
    }
    std::vector<int> sortless=sort(less);
    std::vector<int> sortgreater=sort(greater);
    sortless.push_back(pivot);
    for (int i=0; i < sortgreater.size();i++) sortless.push_back(sortgreater[i]);
    return sortless;
}