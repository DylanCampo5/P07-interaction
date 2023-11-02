/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file P61061_ProductDigits.cc
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Write a program that reads several numbers, and for each one prints the product of its digits, and the product of the digits of the latest product, etcetera, until the resulting product has just one digit.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P61061
 */

#include <iostream>

int main() {
  int x, milesima, centesima, decima, unidad, suma{0};
  std::cin >> x;
  if (x > 999) {
    milesima = x / 1000;
    centesima = (x / 100) % 10;
    decima = (x % 100) / 10;
    unidad = x % 10;
    suma = milesima + centesima + decima + unidad;
    std::cout << "The sum of the digits of " << x << " is " << suma << ".\n";
  }
  if (x > 99 && x <= 999) {
    centesima = x / 100;
    decima = (x / 100) % 10;
    unidad = x % 10;
    suma = centesima + decima + unidad;
    std::cout << "The sum of the digits of " << x << " is " << suma << ".\n";
  }
  if (x > 9 && x <= 99) {
    decima = x / 10;
    unidad = x % 10;
    suma = decima + unidad;
    std::cout << "The sum of the digits of " << x << " is " << suma << ".\n";
  }
  if (x <= 9) {
    std::cout << "The sum of the digits of " << x << " is " << x << ".\n";
  }
  return 0;
}
