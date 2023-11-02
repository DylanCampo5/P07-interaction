/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P79817_Power.cc
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Write a program to compute powers.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P798177
 */
#include <cmath>
#include <iostream>

int main() {
  int base, exponente, exponencial;
  std::cin >> base >> exponente;
  exponencial = pow(base, exponente);
  if (base == 0) {
    if (exponente == 0) 
      std::cout << 1 << '\n';
    else 
    std::cout << 0 << '\n';
  } else {
    std::cout << exponencial << '\n';
  }
  return 0;
}
