#include <vector>
#include "BubbleSort.h"
using namespace std;

BubbleSort::BubbleSort(){}
void BubbleSort::sort(vector<int> &getsort){
   bool wasexchange = 0;
   for (unsigned int i = 0; i < getsort.size(); i++){
       for (unsigned int j = 0; j < getsort.size()-1; j++){
           if(getsort.at(j) > getsort.at(j+1)){
               exchange(getsort.at(j), getsort.at(j+1));
               wasexchange = 1;
           }
       }
       if( !wasexchange ){
           break;
       }
   }
}