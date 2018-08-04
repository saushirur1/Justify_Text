#include <iostream>
#include <vector>
#include "Text_Justfication.h"
using namespace std;
int main()
{
  string temp="how are you this is amazing.";
  greedy_justify obj1(temp);
  obj1.justify(10);
  return 0;
}
