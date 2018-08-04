#include <iostream>
#include <vector>
#include "Text_Justfication.h"
using namespace std;
int main()
{
  string temp="blah blah blah";
  greedy_justify obj1(temp);
  obj1.justify(10);
  obj1.print_justify();
  return 0;
}
