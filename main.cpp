#include <iostream>
using namespace std;

int main()
{
  int a[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1, 0 };
  int total = 0; 

  for (int i = 0; i < 10; i++) { total = total + a[i]; }
  cout << "a. Total = " << total << endl;

  total = 0;
  for (int i = 0; i < 10; i = i + 2) { total = total + a[i]; }
  cout << "b. Total = " << total << endl;

  total = 0;
  for (int i = 1; i < 10; i = i + 2) { total = total + a[i]; }
  cout << "c. Total = " << total << endl;

  total = 0;
  for (int i = 2; i <= 10; i++) { total = total + a[i]; }
  cout << "d. Total = " << total << endl;

  total = 0;
  for (int i = 1; i < 10; i = 2 * i) { total = total + a[i]; }
  cout << "e. Total = " << total << endl;

  total = 0;
  for (int i = 9; i >= 0; i--) { total = total + a[i]; }
  cout << "f. Total = " << total << endl;

  total = 0;
  for (int i = 9; i >= 0; i = i - 2) { total = total + a[i]; }
  cout << "g. Total = " << total << endl;

  total = 0;
  for (int i = 0; i < 10; i++) { total = a[i] - total; }
  cout << "h. Total = " << total << endl;
  
  return 0;
}