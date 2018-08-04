#include <iostream>
#include <vector>
#include "Text_Justfication.h"
using namespace std;
greedy_justify::greedy_justify(string text)
{
string word="";
for(int i=0;i<text.length();i++)
{
  if(text[i]==' ' || i==text.length()-1 || text[i]=='.')
  {
    v.push_back(word);
    word="";
  }
  else
  {
    word=word+text[i];
  }
}
for(int i=0;i<v.size();i++)
{
  l.push_back(v[i].length());
}
}
void greedy_justify::justify(int justify_length)
{
for(int j=0;j<l.size();j++)
{
  cout << l[j] << endl;
}
}
void greedy_justify::print_justify()
{
  cout << "print greedy justify" << endl;
}
