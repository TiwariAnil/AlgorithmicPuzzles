#include <iostream>
#include<stdlib.h>
template <typename Type>
Type max(Type a, Type b) {
    return a > b ? a : b;
}

int main()
{
  // This will call max <int> (by argument deduction)
  std::cout << max(3, 7) << std::endl;
  // This will call max<double> (by argument deduction)
  std::cout << max(3.0, 7.0) << std::endl;
  // This type is ambiguous, so explicitly instantiate max<double>
  std::cout << max<double>(3, 7.0) << std::endl;
  system("pause");
  return 0;
}
