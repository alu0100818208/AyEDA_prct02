#pragma once
#include <iostream>
#include "entero.hpp"
#include <cstring>
#include <string>
#include <cstdlib>

//Definición de la clase racional

class racional {

private:
  entero numerador;
  entero denominador;
  entero mcd;
     
public:
  
  racional(void);//constructor por defecto
  racional(entero num, entero den);//constructor de asignación
  racional(const racional& n);//constructor de copia
  racional(int dio, int dir);//constructor de asignación
  ~racional(void);//destructor
  
  entero get_numerador(void) const;
  entero get_denominador(void) const;
  entero m_d(void) const;//máximo común divisor
  
  //SOBRECARGA DE OPERADORES
  racional& operator=(const racional&);
  racional& operator=(const string cad);
  
  //aritméticos
  friend racional operator+(const racional&, const racional&);
  friend racional operator-(const racional&, const racional&);
  friend racional operator*(const racional&, const racional&);
  friend racional operator/(const racional&, const racional&);
  
  //comparación
  friend bool operator==(const racional&, const racional&);
  friend bool operator!=(const racional&, const racional&);
  friend bool operator<(const racional&, const racional&);
  friend bool operator>(const racional&, const racional&);
  friend bool operator<=(const racional&, const racional&);
  friend bool operator>=(const racional&, const racional&);
  
  //Entrada-Salida
  friend ostream& operator<<(ostream&, const racional&);
  friend istream& operator>>(istream&, const racional&);
  
};