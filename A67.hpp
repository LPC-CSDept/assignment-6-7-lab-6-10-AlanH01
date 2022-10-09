#include <iostream>
using namespace std;
void swap (int &a, int &b)
{
  int t = a;
  a = b;
  b = t;
}
void swap (int &a, int &b, int &c)
{
  int t = a;
  a = c;
  b = t;
  c = b + a;
}
void swap (int &a, int &b, int &c, int &d)
{
  int t = a;
  a = b;
  b = c;
  c = d;
  d = t;
}