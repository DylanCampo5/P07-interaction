/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P29973_Triangle.cc
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Write a program that, given a number n, prints a “triangle of size n”
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P798177
 */

#include <iostream>

int main() {
  int numero;
  std::string caracter = "*";
  std::cin >> numero;
  for (int i{0}; i < numero; i++) {
    std::cout << caracter << '\n';
    caracter = "*" + caracter;
  }
  return 0;
}
