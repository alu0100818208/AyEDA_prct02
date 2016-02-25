#pragma once
#include <iostream>

//Definición de la clase natural

using namespace std;

class natural {

private:
  unsigned int numero;
     
public:
  
  natural(void);//constructor por defecto
  natural(unsigned int n);//constructor de asignación
  natural(const natural& n);//constructor de asignación
  ~natural(void);//destructor
  
  unsigned int get_numero(void) const;
  
  //SOBRECARGA DE OPERADORES
  natural& operator=(const natural&);
  natural& operator=(const unsigned int& n);
  
  //aritméticos
  friend natural operator+(const natural&, const natural&);
  friend natural operator-(const natural&, const natural&);
  friend natural operator*(const natural&, const natural&);
  friend natural operator/(const natural&, const natural&);
  
  //comparación
  friend bool operator==(const natural&, const natural&);
  friend bool operator!=(const natural&, const natural&);
  friend bool operator<(const natural&, const natural&);
  friend bool operator>(const natural&, const natural&);
  friend bool operator<=(const natural&, const natural&);
  friend bool operator>=(const natural&, const natural&);
  
  //Entrada-Salida
  friend ostream& operator<<(ostream&, const natural&);
  friend istream& operator>>(istream&, const natural&);
  
};