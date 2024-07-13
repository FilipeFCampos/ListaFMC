#include "classesq1.hpp"
#include <iostream>
#include <cmath>

int Casos::acharTripla() {

  int triplas = 0;

  for (int x = this->x[0]; x <= this->x[1]; x++) {
    for (int y = this->y[0]; y <= this->y[1]; y++) {
      for (int n = this->n[0]; n <= this->n[1]; n++) {
        if ((x + y) % n == std::fabs((x - y) % n)) {
          triplas++;
        }
      }
    }
  }

  return triplas;
}

Casos::Casos() {
  for (int i = 0; i < 2; i++) {
    this->x[i] = 0;
    this->y[i] = 0;
    this->n[i] = 0;
  }
}

bool Casos::check_casos() {
  if (this->x[0] < -1000 || this->x[0] > this->x[1] || this->x[1] > 1000)
    return true;
  if (this->y[0] < -1000 || this->y[0] > this->y[1] || this->y[1] > 1000)
    return true;
  if (this->n[0] < 1 || this->n[0] > this->n[1] || this->n[1] > 1000)
    return true;

  return false;
}