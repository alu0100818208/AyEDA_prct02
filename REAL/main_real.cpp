#include "real.hpp"
#include <cmath>

//Aritméticos
real operator+(const real& a, const real& b)
{
  return real(a.get_numero() + b.get_numero());
}

real operator-(const real& a, const real& b)
{ 
      return real(a.get_numero() - b.get_numero());
}

real operator*(const real& a, const real& b)
{
  return real(a.get_numero() * b.get_numero());
}

real operator/(const real& a, const real& b)
{
  return real(a.get_numero() / b.get_numero());
}

//comparación
bool operator==(const real& a, const real& b)
{
  return(fabs(a.get_numero()-b.get_numero()) < EPSILON ? true:false);
}

bool operator!=(const real& a, const real& b)
{
  return(a==b ? false:true);
}

bool operator<(const real& a, const real& b)
{
  return((a.get_numero()-b.get_numero()) < -EPSILON ? true:false);
}

bool operator>(const real& a, const real& b)
{
  if(a!=b) {
    return(a<b ? false:true);
  } else {
    return false;
  }
}

bool operator<=(const real& a, const real& b)
{
  return(a>b ? false:true);
}

bool operator>=(const real& a, const real& b)
{
  return(a<b ? false:true);
}

//Entrada-Salida
ostream& operator<<(ostream& os, const real& a)
{
  os << a.get_numero();
  return os;
}

istream& operator>>(istream& is, real& a)
{
  float n;
  is >> n;
  a = real(n);
  return is;
}

int main() {

  real A, X;//constructor por defecto
  real B(5.73421);//constructor de asignación
  real C(8.23456+B);//constructor de copia
  
  //Entrada
  cout << "Elige un valor para A" << endl;
  cin >> A;

//OPERADORES ARITMÉTICOS  
  
  //suma
  X = A + B + C;
  cout << "Suma: " << A << "+" << B << "+" << C << "=" << X << endl;//salida
  
  //resta
  X = A - C;//sin error
  cout << "Resta: " << A << "-" << B << "-" << C << "=" << X << endl;//salida
  X = B - C;//con error
  
  //multiplicación
  X = A*B*C;
  cout << "Multiplicacion: " << A << "*" << B << "*" << C << "=" << X << endl;//salida

  //división
  X = A/C;
  cout << "Division: " << A << "/" << C << "=" << X << endl;//salida
  
//OPERADORES DE COMPARACIÓN

  //Igualdad y desigualdad
  A = 4.123456;//operador de asignación
  B = 4.123467;
  if(A==B) {
    cout << "A:" << A << " y B:" << B << " son iguales." << endl; //salida
   }
    
  if(B!=C){
    cout << "B:" << B << " y C:" << C << " son distintos." << endl;//salida
   }
  
  //Mayor Menor
  real Y(4.56789), Z(4.567993);
  real X2;
  cout << "Y:" << Y << " Z:" << Z << endl;
  X = Y<Z?Y:Z;
  X2 = Y>Z?Y:Z;
  cout << "X:" << X << " contiene el menor entre Z e Y" << endl;//salida
  cout << "X2:" << X2 << " contiene el mayor entre Z e Y" << endl;//salida
  
  //Mayor/Menor o igual
  A = 5.123456; B = 7.22389; C = 5.123998; Y = 2.258964;
  cout << "A:" << A << " B:" << B << " C:" << C << " Y:" << Y << endl;
  
  X = A<=C?A:C;//80 sería si estuviese mal el algoritmo de comparación
  X2 = A<=B?A:B;
  cout << "X:" << X << " contiene el menor o igual entre A y C" << endl;//A y C son iguales
  cout << "X2:" << X2 << " contiene el menor o igual entre A y B" << endl;//A es menor que B
  
  X = A>=C?A:C;
  X2 = A>=Y?A:B;
  cout << "X:" << X << " contiene el mayor o igual entre A y C" << endl;//A y C son iguales
  cout << "X2:" << X2 << " contiene el mayor o igual entre A e Y" << endl;//A es mayor que Y
  
  return 0;
}

















