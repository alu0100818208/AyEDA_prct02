#pragma once
#include <iostream>

//Definición de la clase entero

using namespace std;

class entero {

private:
  int numero;
     
public:
  
  entero(void);//constructor por defecto
  entero(int n);//constructor de asignación
  entero(const entero& n);//constructor de asignación
  ~entero(void);//destructor
  
  int get_numero(void) const;
  
  //SOBRECARGA DE OPERADORES
  entero& operator=(const entero&);
  entero& operator=(const int& n);
  
  //aritméticos
  friend entero operator+(const entero&, const entero&);
  friend entero operator-(const entero&, const entero&);
  friend entero operator*(const entero&, const entero&);
  friend entero operator/(const entero&, const entero&);
  
  //comparación
  friend bool operator==(const entero&, const entero&);
  friend bool operator!=(const entero&, const entero&);
  friend bool operator<(const entero&, const entero&);
  friend bool operator>(const entero&, const entero&);
  friend bool operator<=(const entero&, const entero&);
  friend bool operator>=(const entero&, const entero&);
  
  //Entrada-Salida
  friend ostream& operator<<(ostream&, const entero&);
  friend istream& operator>>(istream&, const entero&);
  
};