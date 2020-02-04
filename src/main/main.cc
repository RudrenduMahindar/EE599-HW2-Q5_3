#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    string s="EE599";
    cout<<"before transform = "<< s <<endl;
    solution.StringLower(s);
    //std::cout << solution.PrintHelloWorld() << std::endl;
    cout<<"after transform = "<< s <<endl;

    return EXIT_SUCCESS;
}