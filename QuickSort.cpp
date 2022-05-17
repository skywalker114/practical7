#include <vector>
#include "QuickSort.h"
using namespace std;

QuickSort::QuickSort(){}
void QuickSort::sort(vector<int> list, int lower, int upper){
   if (lower < upper){
       int point_index = (lower + upper) / 2;
       int new_point = Split(list, lower, upper, point_index);
       sort(list, lower, new_point - 1);
       sort(list, new_point + 1, upper);  
   }
}
int QuickSort::Split(vector<int> list, int lower, int upper, int point_index){
   int new_point = lower;
   int point_value = list.at(point_index);
   exchange(list.at(point_index), list.at(upper));
   for (int i = lower; i <= upper - 1; i++){
       if (list.at(i) <= point_value){
           exchange(list.at(i), list.at(new_point));
           new_point++;
       }
   }
   exchange(list.at(new_point), list.at(upper));
   return new_point;
};