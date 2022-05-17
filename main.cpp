#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;

int main(){
   vector<int> inputs;
   string loadnumber;
   getline(cin, loadnumber);
   istringstream iss(loadnumber);
   int val;
   while (iss >> val){
       inputs.push_back(val);
   }
   QuickSort myq;
   myq.sort(inputs, 0, inputs.size() - 1);
   RecursiveBinarySearch mybin;
   int found = mybin.boolSearch(inputs, 0, 0, inputs.size() - 1);
   if (found >= 0){
       cout << "false";
   }
   else{
       cout << "true";
   }
   for(unsigned int i = 0; i < inputs.size(); i++){
       cout << " " << inputs.at(i);
   }
}