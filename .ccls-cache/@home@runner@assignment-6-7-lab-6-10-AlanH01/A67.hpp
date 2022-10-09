#include <iomanip>
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}
void swap (int &a, int &b, int &c)
{
  int min, med, max;
  if (a > b && a > c)
  {
    max = a;
    med = (b > c ? b : c);
    min = (b > c ? c : b);
  }
else if (b > c)
{
  
}
}