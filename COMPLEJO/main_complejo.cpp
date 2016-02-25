#include "complejo.hpp"


//-----------------------------REALES-----------------------------------------------------------
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


//----------------------------COMPLEJO-----------------------------------------

//Aritméticos
complejo operator+(const complejo& a, const complejo& b)
{
  return complejo(a.get_r() + b.get_r(), a.get_i() + b.get_i());
}

complejo operator-(const complejo& a, const complejo& b)
{ 
  return complejo(a.get_r() - b.get_r(), a.get_i() - b.get_i());
}

complejo operator*(const complejo& a, const complejo& b)
{
  return complejo((a.get_r() * b.get_r()) - (a.get_i() * a.get_i()), a.get_r()*b.get_i() + a.get_i()*b.get_r());//(a + bi) * (c + di) = (ac − bd) + (ad + bc)i
}

complejo operator/(const complejo& a, const complejo& b)
{
  return complejo((a.get_r()*b.get_r() + a.get_i()*b.get_i())/(b.get_r()*b.get_r()+b.get_i()*b.get_i()), (a.get_i()*b.get_r()-a.get_r()*b.get_i())/(b.get_r()*b.get_r()+b.get_i()*b.get_i()));
}

//comparación
bool operator==(const complejo& a, const complejo& b)
{
  return(fabs(((a.get_m()-b.get_m()).get_numero())) < EPSILON ? true:false);
}

bool operator!=(const complejo& a, const complejo& b)
{
  return(a==b ? false:true);
}

bool operator<(const complejo& a, const complejo& b)
{
  return((a.get_m()-b.get_m()) < -EPSILON ? true:false);
}

bool operator>(const complejo& a, const complejo& b)
{
  if(a!=b) {
    return(a<b ? false:true);
  } else {
    return false;
  }
}

bool operator<=(const complejo& a, const complejo& b)
{
  return(a>b ? false:true);
}

bool operator>=(const complejo& a, const complejo& b)
{
  return(a<b ? false:true);
}

//Entrada-Salida
ostream& operator<<(ostream& os, const complejo& a)
{
  os << "[" << a.get_r() << "+" << a.get_i() << "i]";
  return os;
}

istream& operator>>(istream& is, complejo& a)
{
  float re, im;
  cout << "Parte real:";
  is >> re;
  
  cout << "Parte imaginaria:";
  is >> im;
  cout << endl;
  
  a = complejo(re, im);
  return is;
}

int main() {

  complejo A, X;//constructor por defecto
  complejo B(5.73421,7.359);//constructor de asignación
  complejo C(8.23456,2.338);//constructor de copia
  
  //Entrada
  cout << "Elige un valor para A" << endl;
  cin >> A;
  cout << endl;

//OPERADORES ARITMÉTICOS  
  
  //suma
  X = A + B + C;
  cout << "Suma: " << A << "+" << B << "+" << C << "=" << X << endl;//salida
  cout << endl;
  
  //resta
  X = A - C;//sin error
  cout << "Resta: " << A << "-" << B << "-" << C << "=" << X << endl;//salida
  X = B - C;//con error
  cout << endl;
  
  //multiplicación
  X = A*B*C;
  cout << "Multiplicacion: " << A << "*" << B << "*" << C << "=" << X << endl;//salida
  cout << endl;
  
  //división
  X = A/C;
  cout << "Division: " << A << "/" << C << "=" << X << endl;//salida
  cout << endl;
  
//OPERADORES DE COMPARACIÓN

  //Igualdad y desigualdad
  A = "4.1256+5.78i";//operador de asignación
  B = "4.123467+5.78i";
  if(A==B) {
    cout << "A:" << A << " y B:" << B << " son iguales." << endl; //salida
   }
    
  if(B!=C){
    cout << "B:" << B << " y C:" << C << " son distintos." << endl;//salida
   }
   cout << endl;
  
  //Mayor Menor
  complejo Y(4.56789,2.33512), Z(4.567993,2.33599);
  complejo X2;
  cout << "Y:" << Y << " Z:" << Z << endl;
  X = Y<Z?Y:Z;
  X2 = Y>Z?Y:Z;
  cout << "X:" << X << " contiene el menor entre Z e Y" << endl;//salida
  cout << "X2:" << X2 << " contiene el mayor entre Z e Y" << endl;//salida
  cout << endl;
  
  //Mayor/Menor o igual
  A = "5.123456+7.58812i"; B = "7.22389+10.55i"; C = "5.123998+5.8899i"; Y = "2.258964+1.33i";
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

















