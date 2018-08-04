#include <iostream>
#include <vector>
class greedy_justify
{
private:
  std::vector<std::string> v;
  std::vector<int> l;
  std::vector<int> result;
public:
  greedy_justify(std::string temp1);
  void helper(std::string filename);
  void justify(int justify_length);
  void print_justify();
};
