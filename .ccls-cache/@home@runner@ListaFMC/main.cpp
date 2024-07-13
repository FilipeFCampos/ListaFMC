#include <iostream>
#include <vector>
#include "classesq1.hpp"

int main() {
  int T;
  Teste teste;

  std::cin >> T;
  for (int i = 0; i < T; i++)  {
    Casos *casos = new Casos();
    
    for (int j = 0; j < 2; j++)  {
      std::cin >> casos->x[j];
      std::cin >> casos->y[j];
      std::cin >> casos->n[j];
    }
    
    if (casos->check_casos())  {
      std::cout << "Valor invalido" << std::endl;
      return 1;
    }
    teste.adicionar_caso(casos);
  }

  for (int i = 0; i < T; i++)  {
    std::cout << "Caso" << i + 1 << ": " << teste.casos[i]->acharTripla() << std::endl;
  }

  
  return 0;
}