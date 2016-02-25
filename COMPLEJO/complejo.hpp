#include "real.hpp"
#include <cstdlib>

//Definición de la clase complejo

class complejo {

private:
  real r;
  real i;
  real m;//módulo
     
public:
  
  complejo(void);//constructor por defecto
  complejo(real re, real im);//constructor de asignación
  complejo(float re, float im);//constructor de asignación
  complejo(const complejo& n);//constructor de copia
  ~complejo(void);//destructor
  
  real get_r(void) const;
  real get_i(void) const;
  real get_m(void) const;
  
  //SOBRECARGA DE OPERADORES
  complejo& operator=(const complejo&);
  complejo& operator=(const string a);//operador de asignación para darle un valor desde una cadena del tipo X+Yi
  
  
  //aritméticos
  friend complejo operator+(const complejo&, const complejo&);
  friend complejo operator-(const complejo&, const complejo&);
  friend complejo operator*(const complejo&, const complejo&);
  friend complejo operator/(const complejo&, const complejo&);
  
  //comparación
  friend bool operator==(const complejo&, const complejo&);
  friend bool operator!=(const complejo&, const complejo&);
  friend bool operator<(const complejo&, const complejo&);
  friend bool operator>(const complejo&, const complejo&);
  friend bool operator<=(const complejo&, const complejo&);
  friend bool operator>=(const complejo&, const complejo&);
  
  //Entrada-Salida
  friend ostream& operator<<(ostream&, const complejo&);
  friend istream& operator>>(istream&, const complejo&);
  
};