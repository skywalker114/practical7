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
    QuickSort myq;
    RecursiveBinarySearch mybin;
    int loadnum = 0;
    std::string found;
    std::vector<int> val;
    while (std::cin >> loadnum) val.push_back(loadnum);
    val = myq.sort(val);
    if (mybin.search(val, 1)) found = "true";
    else found = "false";
    std::cout << found << " ";
    for (int i = 0; i < val.size(); i++) std::cout << val[i] << " ";
    return 0;
}