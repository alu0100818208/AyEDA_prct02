#include "entero.hpp"


//Aritméticos
entero operator+(const entero& a, const entero& b)
{
  return entero(a.get_numero() + b.get_numero());
}

entero operator-(const entero& a, const entero& b)
{
      return entero(a.get_numero() - b.get_numero());
}

entero operator*(const entero& a, const entero& b)
{
  return entero(a.get_numero() * b.get_numero());
}

entero operator/(const entero& a, const entero& b)
{
  return entero(a.get_numero() / b.get_numero());
}

//comparación
bool operator==(const entero& a, const entero& b)
{
  return(a.get_numero()==b.get_numero() ? true:false);
}

bool operator!=(const entero& a, const entero& b)
{
  return(a==b ? false:true);
}

bool operator<(const entero& a, const entero& b)
{
  return(a.get_numero()<b.get_numero() ? true:false);
}

bool operator>(const entero& a, const entero& b)
{
  if(a!=b) {
    return(a<b ? false:true);
  } else {
    return false;
  }
}

bool operator<=(const entero& a, const entero& b)
{
  return(a>b ? false:true);
}

bool operator>=(const entero& a, const entero& b)
{
  return(a<b ? false:true);
}

//Entrada-Salida
ostream& operator<<(ostream& os, const entero& a)
{
  os << a.get_numero();
  return os;
}

istream& operator>>(istream& is, entero& a)
{
  int n;
  is >> n;
  a = entero(n);
  return is;
}

int main() {

  entero A, X;//constructor por defecto
  entero B(5);//constructor de asignación
  entero C(5+B);//constructor de copia
  
  //Entrada
  cout << "Elige un valor para A" << endl;
  cin >> A;

//OPERADORES ARITMÉTICOS  
  
  //suma
  X = A + B + C;
  cout << "Suma: " << A << "+" << B << "+" << C << "=" << X << endl;//salida
  
  //resta
  X = A - C;//sin error
  cout << "Resta: " << A << "-" << C << "=" << X << endl;//salida
  X = B - C;//con error
  cout << "Resta: " << B << "-" << C << "=" << X << endl;//salida
  
  //multiplicación
  X = A*B*C;
  cout << "Multiplicacion: " << A << "*" << B << "*" << C << "=" << X << endl;//salida

  //división
  X = A/C;
  cout << "Division: " << A << "/" << C << "=" << X << endl;//salida
  
//OPERADORES DE COMPARACIÓN

  //Igualdad y desigualdad
  A = 4;//operador de asignación
  B = 4;
  if(A==B) {
    cout << "A:" << A << " y B:" << B << " son iguales." << endl; //salida
   }
    
  if(B!=C){
    cout << "B:" << B << " y C:" << C << " son distintos." << endl;//salida
   }
  
  //Mayor Menor
  entero Y(4), Z(7);
  entero X2;
  cout << "Y:" << Y << " Z:" << Z << endl;
  X = Y<Z?Y:Z;
  X2 = Y>Z?Y:Z;
  cout << "X:" << X << " contiene el menor entre Z e Y" << endl;//salida
  cout << "X2:" << X2 << " contiene el mayor entre Z e Y" << endl;//salida
  
  //Mayor/Menor o igual
  A = 5; B = 7; C = 5; Y = 2;
  cout << "A:" << A << " B:" << B << " C:" << C << " Y:" << Y << endl;
  
  X = A<=C?A:80;//80 sería si estuviese mal el algoritmo de comparación
  X2 = A<=B?A:B;
  cout << "X:" << X << " contiene el menor o igual entre A y C" << endl;//A y C son iguales
  cout << "X2:" << X2 << " contiene el menor o igual entre A y B" << endl;//A es menor que B
  
  X = A>=C?A:80;
  X2 = A>=Y?A:B;
  cout << "X:" << X << " contiene el mayor o igual entre A y C" << endl;//A y C son iguales
  cout << "X2:" << X2 << " contiene el mayor o igual entre A e Y" << endl;//A es mayor que Y
  
  return 0;
}

















