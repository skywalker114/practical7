#include <vector>
#include "BubbleSort.h"
using namespace std;

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
   for (int i = 0; i < list.size(); i++)
   {
       for (int j = 0; j < list.size()-1; j++)
       {
           if(list[j] > list[j+1]){
               exchange(list[j], list[j+1]);
           }
       }
   }
   return list;
}