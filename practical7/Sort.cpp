#include "Sort.h"
using namespace std;

Sort::Sort(){}
void Sort::exchange(int &a, int &b){
   int temp = a;
   a = b;
   b = temp;
}