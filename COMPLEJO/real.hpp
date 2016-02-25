#pragma once
#include <iostream>
#include <cmath>

#define EPSILON 0.01
using namespace std;
//Definición de la clase real

using namespace std;

class real {

private:
  float numero;
     
public:
  
  real(void);//constructor por defecto
  real(float n);//constructor de asignación
  real(const real& n);//constructor de asignación
  ~real(void);//destructor
  
  float get_numero(void) const;
  real raiz(void);
  
  //SOBRECARGA DE OPERADORES
  real& operator=(const real&);
  real& operator=(const float& n);
  
  //aritméticos
  friend real operator+(const real&, const real&);
  friend real operator-(const real&, const real&);
  friend real operator*(const real&, const real&);
  friend real operator/(const real&, const real&);
  
  //comparación
  friend bool operator==(const real&, const real&);
  friend bool operator!=(const real&, const real&);
  friend bool operator<(const real&, const real&);
  friend bool operator>(const real&, const real&);
  friend bool operator<=(const real&, const real&);
  friend bool operator>=(const real&, const real&);
  
  //Entrada-Salida
  friend ostream& operator<<(ostream&, const real&);
  friend istream& operator>>(istream&, const real&);
  
};