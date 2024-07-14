#include <iostream>
#include <vector>

int ndivisores(int n);

int main(void)    {
    
    std::vector<int> sequencia;
    sequencia.push_back(1);

    int ultimo;
    int seguinte;

    while (sequencia.back() <= 1000000)    {
        ultimo = sequencia.back();
        seguinte = ultimo + ndivisores(ultimo);
        sequencia.push_back(seguinte);
    }

    int T;
    std::cin >> T;
    if (T > 1000)
        return 1;
    
    int *resultados = new int[T];
    
    for (int i = 0; i < T; i++)    {
        int A, B;
        std::cin >> A >> B;

        int contador = 0;
        for (int num : sequencia)    {
            if (num >= A && num <= B)    {
                contador++;
            } 
            else if (num > B)    {
                break;
            }
        }

        resultados[i] = contador;
    }

    for (int i = 0; i < T; i++)    {
        std::cout << "Caso " << i + 1 << ": " << resultados[i] << std::endl;
    }

    delete [] resultados;

    return 0;
}

int ndivisores(int n)    {
    
    int contador = 0;
    
    for (int i = 1; i * i <= n; i++)    {
        
        if (n % i == 0)    {
            contador++;
            
            if (i != n / i)    {
                contador++;
            }
        }
    }

    return contador;
}