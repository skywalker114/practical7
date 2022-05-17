#include <vector>
#include "BubbleSort.h"
using namespace std;

BubbleSort::BubbleSort(){}
void BubbleSort::sort(vector<int> list){
   bool wasexchange = 0;
   for (unsigned int i = 0; i < list.size(); i++){
       for (unsigned int j = 0; j < list.size()-1; j++){
           if(list.at(j) > list.at(j+1)){
               exchange(list.at(j), list.at(j+1));
               wasexchange = 1;
           }
       }
       if( !wasexchange ){
           break;
       }
   }
}