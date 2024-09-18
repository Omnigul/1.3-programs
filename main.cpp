// determining amount of ingredint needed to make cookie(s) 
#include <iostream>
using namespace std;

double sugar = 1.5;
double butter = 1;
double flour = 2.75;
double cookieNum;

int main() 
{
  cout << "how many cookies do you want?" << endl;
  cin >> cookieNum;
  double sugarNum = cookieNum / 48 * sugar;
  double butterNum = cookieNum / 48 * butter;
  double flourNum = cookieNum / 48 * flour;

  cout << "you need " << sugarNum << " cups of sugar to make that (many) cookie(s)" << endl;
  cout << "you need " << butterNum << " cups of butter to make that (many) cookie(s)" << endl;
  cout << "you need " << flourNum << " cups of flour to make that (many) cookie(s)" << endl;
}