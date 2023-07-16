#include <iostream>

int iA[] = {1,9,3,5,6,0,8,3,-5,-6,2,4};
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
  float avg = sum/(sizeof(iA)/sizeof(int));
  std::cout << avg << "\n";
  std::cout << sum << "\n";
}

