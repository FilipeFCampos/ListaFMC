#include <iostream>

int mdc(int a, int b); 

int main() {
  int T;
  long long int M;

  std::cin >> T;
  if (T < 1 || T > 100)
    return 1;

  int *N = new int[T];

  for (int i = 0; i < T; i++) {

    std::cin >> N[i];

    if (N[i] < 1 || N[i] > 2048) {
      std::cout << "Valor invalido" << std::endl;
      delete[] N;

      return 1;
    }
    
  }

  for (int caso = 0; caso < T; caso++)  {
    M = 0;
    for (int i = 1; i < N[caso]; i++)  {
      for (int j = i + 1; j <= N[caso]; j++)  {
        M += mdc(i, j);
      }
    }
    std::cout << "Caso " << caso + 1 << ": " << M << std::endl;
  }

  delete[] N;
  
  return 0;
}


int mdc(int a, int b)  {
  int resto;

  if (a > b)  {
    int aux = a;
    a = b;
    b = aux;
  }
  
  do {
    resto = a % b;
    a = b;
    b = resto;
  } while (resto != 0);
  
  return a;
}