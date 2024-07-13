#include <iostream>
#include <vector>
#include "classesq1.hpp"

int main() {
  int T;

  std::cin >> T;
  if (T < 1 || T > 10)
    return 1;
    
  Casos *casos = new Casos[T];
  
  for (int i = 0; i < T; i++)  {
    
    std::cin >> casos[i].x[0];
    std::cin >> casos[i].x[1];
    
    std::cin >> casos[i].y[0];
    std::cin >> casos[i].y[1];
    
    std::cin >> casos[i].n[0];
    std::cin >> casos[i].n[1];
    
    if (casos[i].check_casos())  {
      std::cout << "Valor invalido" << std::endl;
      delete [] casos;
      
      return 1;
    }

  }

  for (int i = 0; i < T; i++)  {
    std::cout << "Caso " << i + 1 << ": " << casos[i].acharTripla() << std::endl;
  }

  delete [] casos;
  
  return 0;
}