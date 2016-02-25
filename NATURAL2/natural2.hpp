#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "natural2"

//Definición de la clase natural_i

using namespace std;

class natural_i {

private:
  vector <unsigned int> numero;
     
public:
  
  natural_i(void);//constructor por defecto
  natural_i(string n);//constructor de asignación
  natural_i(const natural_i& n);//constructor de asignación
  natural_i(vector<unsigned int> n);
  ~natural_i(void);//destructor
  
  vector<unsigned int> get_numero(void) const;
  void editsize(vector<unsigned int>& n); 
  
  //SOBRECARGA DE OPERADORES
  natural_i& operator=(const natural_i&);
  natural_i& operator=(const string& n);
  natural_i& operator=(const vector<unsigned int> n);
  
  //aritméticos
  friend natural_i operator+(const natural_i&, const natural_i&);/*
  friend natural_i operator-(const natural_i&, const natural_i&);
  friend natural_i operator*(const natural_i&, const natural_i&);
  friend natural_i operator/(const natural_i&, const natural_i&);
  
  //comparación
  friend bool operator==(const natural_i&, const natural_i&);
  friend bool operator!=(const natural_i&, const natural_i&);
  friend bool operator<(const natural_i&, const natural_i&);
  friend bool operator>(const natural_i&, const natural_i&);
  friend bool operator<=(const natural_i&, const natural_i&);
  friend bool operator>=(const natural_i&, const natural_i&);
  */
  //Entrada-Salida
  friend ostream& operator<<(ostream&, const natural_i&);
  friend istream& operator>>(istream&, const natural_i&);
  
};