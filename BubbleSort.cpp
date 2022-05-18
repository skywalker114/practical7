#include <vector>
#include "BubbleSort.h"
using namespace std;

std::vector<int> BubbleSort::sort(vector<int> list)
{
   bool wasexchange = 0;
   for (int i = 0; i < list.size(); i++){
       for (int j = 0; j < list.size()-1; j++){
           if(list.at(j) > list.at(j+1)){
               exchange(list.at(j), list.at(j+1));
               wasexchange = 1;
           }
       }
       if( !wasexchange ){
           break;
       }
   }
   return list;
}