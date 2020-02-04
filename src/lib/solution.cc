#include "solution.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

void Solution::StringLower(string& s) { 
  
  transform(s.begin(),s.end(),s.begin(),::tolower);
  
}
