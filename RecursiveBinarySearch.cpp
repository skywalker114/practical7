#include <vector>
#include "RecursiveBinarySearch.h"
using namespace std;

RecursiveBinarySearch::RecursiveBinarySearch(){}
int RecursiveBinarySearch::search(vector<int> list, int key, int lower, int upper){
   if( lower > upper ){
       return -1;
   }
   int midpoint = (lower+upper)/2;
   if( list.at(midpoint) > key ){  
       return search(list, key, lower, midpoint - 1);
   }
   else if( list.at(midpoint) < key ){
       return search(list, key, midpoint + 1, upper);
   }
   else{
       return midpoint;
   }
}