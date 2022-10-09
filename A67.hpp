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
int main ()
{
  int n1, n2, n3, n4;
  int max, min;
  
  n1 = 10;
  n2 = 20;
  swap (n1, n2);
  cout << n1 << endl;
  cout << n2 << endl;
  
  n1 = 20;
  n2 = 30;
  n3 = 10;
  swap (n1, n2, n3);
  cout << n1 << endl;
  cout << n2 << endl;
  cout << n3 << endl;

  
  n1 = 10;
  n2 = 20;
  n3 = 30;
  n4 = 40;
  swap (n1, n2, n3, n4);
  cout << n1 << endl;
  cout << n2 << endl;
  cout << n3 << endl;
  cout << n4 << endl;
  return 0;
}