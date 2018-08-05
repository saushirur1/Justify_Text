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
int length=0;
for(int j=0;j<l.size();j++)
{
if(length >= justify_length)
{
result.push_back(j-1);
j=j-1;
length=0;
}
if(j==l.size()-1)
{
  result.push_back(j);
}
else
{
length=length+l[j]+1;
}
}
}
void greedy_justify::print_justify()
{
  int index=0;
  // for(int i=0;i<result.size();i++)
  // {
  //   cout << result[i] << endl;
  // }
  for(int i=0;i<result.size();i++)
  {
    for(int j=index;j<result[i];j++)
    {
      cout << v[j] << " ";
    }
    index=result[i];
    cout << "|";
    cout << endl;
  }
}
dynamic_justify::dynamic_justify(string text)
{
  int word="";
  for(int i=0;i<text.length();i++)
  {
    if(text[i]==' ' || i==text.length()-1)
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
int dynamic_justify::badness(int index1,int index2)
{
  cout << "badness function" << endl;
}
