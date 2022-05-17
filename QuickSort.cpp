#include <vector>
#include "QuickSort.h"
using namespace std;

QuickSort::QuickSort(){}
void QuickSort::sort(vector<int> &getsort, int lower, int upper){
   if (lower < upper){
       int point_index = (lower + upper) / 2;
       int new_point = Split(getsort, lower, upper, point_index);
       sort(getsort, lower, new_point - 1);
       sort(getsort, new_point + 1, upper);  
   }
}
int QuickSort::Split(vector<int> &getsort, int lower, int upper, int point_index){
   int new_point = lower;
   int point_value = getsort.at(point_index);
   exchange(getsort.at(point_index), getsort.at(upper));
   for (int i = lower; i <= upper - 1; i++){
       if (getsort.at(i) <= point_value){
           exchange(getsort.at(i), getsort.at(new_point));
           new_point++;
       }
   }
   exchange(getsort.at(new_point), getsort.at(upper));
   return new_point;
}

