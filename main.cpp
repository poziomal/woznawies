#include <iostream>

int iA[] = {2,8,5,4,9,-2,9,5};
int main()
{
  std::cout << "Hello World!\n";
  int x[5];
  int z[2] = {1,2};
  std::cout << sizeof(iA) << "\n";
  std::cout << sizeof(iA[0]) << "\n";
  int i = 0;
  int sum = 0;
  while (i < sizeof(iA)/ sizeof(int))
  {
      sum = sum+iA[i];
      i = i+1;
  }
  std::cout << sum << "\n";
}

