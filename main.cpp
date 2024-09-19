// finding interest rate stuff or whatever :| 
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float principal;
float rate;
float compound;
float balance;
float interest;

int main() 
{
  cout << "What is the principal?" << endl;
  cin >> principal;
  cout << "How much is the interest?" << endl;
  cin >> rate;
  cout << "How many times has the intrest compounded?" << endl;
  cin >> compound;

  
  interest = pow((1 + (rate/100) / compound),compound);
  balance = principal * interest;

  
  cout << left << setw(15) << "Interest rate:" << right << setw(16) << rate << "%" << endl;
  cout << left << setw(15) << "Times compounded:" << right << setw(15) << compound << endl;
  cout << left << setw(15) << "Principal:" << right << setw(13) << "$" << principal << endl;
  cout << setprecision(2) << fixed << left << setw(15) << "Interest:" << right << setw(12) << "$" << (interest - 1) * 1000 << endl;
  cout << left << setw(15) << "Total balance:" << right << setw(10) << "$" << balance << endl;
}