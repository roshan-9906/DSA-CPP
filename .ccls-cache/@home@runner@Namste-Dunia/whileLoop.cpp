#include <iostream>

using namespace std;

int main ()
{
  int n;
  std::cout << "Enter Your Numbers" << std::endl;
  cin >> n;

  int i = 1;
  while (i <= n)
    {
      cout << i << " ";
      i = i + 1;
    }


  return 0;
}
