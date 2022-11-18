/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P39359_Squares_3.cc
  * @author Raúl Gonzalez Acosta (alu0101543529@ull.edu.es)
  * @date 14/11/2022
  * @brief Es un programa que imprime cuadrados n×n. (Se dibuja cada cuadrado
           de forma independiente y comienza a llenarlo con 0, 1, …, 9, 0, etc.)
  * @see https://jutge.org/problems/P39359_en
  */

#include <iostream>

int main() {
    int lado;
    int k {0};
    int relleno {0};
    while (std::cin >> lado) {
        if (k == 0) k=1;
        else std::cout << std::endl; 
        for (int i {0}; i<lado; i++) {
            for (int j {0}; j<lado; j++) {
                std::cout << relleno;
                relleno = relleno+1;
                if (relleno>9) relleno=0;
            }
            std::cout << std::endl;
        }
    }
}