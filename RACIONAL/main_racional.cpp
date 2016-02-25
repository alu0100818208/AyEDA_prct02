#include "racional.hpp"


//ENTERO
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


//RACIONAL
//Aritméticos
racional operator+(const racional& a, const racional& b)
{  
  return racional(a.get_numerador()*b.get_denominador() + b.get_numerador()*a.get_denominador(),a.get_denominador()*b.get_denominador());
}

racional operator-(const racional& a, const racional& b)
{ 
  return racional(a.get_numerador()*b.get_denominador() - b.get_numerador()*a.get_denominador(),a.get_denominador()*b.get_denominador());
}

racional operator*(const racional& a, const racional& b)
{ 
  return racional(a.get_numerador()*b.get_numerador(),a.get_denominador()*b.get_denominador());
}

racional operator/(const racional& a, const racional& b)
{
  return racional(a.get_numerador()*b.get_denominador(),a.get_denominador()*b.get_numerador());
}

//comparación
bool operator==(const racional& a, const racional& b)
{
  if((a.get_numerador()==b.get_numerador())&&(a.get_denominador()==b.get_denominador())) {
    return true;
  } else {
    return false;
  }
}

bool operator!=(const racional& a, const racional& b)
{
  return(a==b ? false:true);
}

bool operator<(const racional& a, const racional& b)
{
  if(a.get_numerador()==b.get_denominador())
  {
    return(a.get_denominador()<b.get_denominador() ? false:true);
    
  } else {
    
      if((a.get_numerador()*b.get_denominador())<(b.get_numerador()*a.get_denominador())) {
	return true;
      } else {
	return false;
      }
  }
  
}

bool operator>(const racional& a, const racional& b)
{
  if(a!=b) {
    return(a<b ? false:true);
  } else {
    return false;
  }
}

bool operator<=(const racional& a, const racional& b)
{
  return(a>b ? false:true);
}

bool operator>=(const racional& a, const racional& b)
{
  return(a<b ? false:true);
}

//Entrada-Salida
ostream& operator<<(ostream& os, const racional& a)
{
  os << a.get_numerador() << "_" << a.get_denominador();
  return os;
}

istream& operator>>(istream& is, racional& a)
{
  string n;
  is >> n;
  a = n;
  return is;
}

int main() {

  racional A, X;//constructor por defecto
  racional B(40,25);//constructor de asignación
  racional C(25,50);//constructor de copia
  
  //Entrada
  cout << "Elige un valor para A" << endl;
  cin >> A;
  cout << endl;

  cout << "A:" << A << " B:" << B << " C:" << C << endl;
  cout << endl;
//OPERADORES ARITMÉTICOS  
  
  //suma
  X = A + B + C;
  cout << "Suma: " << A << "+" << B << "+" << C << "=" << X << endl;//salida
  cout << endl;
  
  //resta
  X = C - A;
  cout << "Resta: " << C << "-" << A << "=" << X << endl;//salida
  X = C - B;
  cout << "Resta: " << C << "-" << B << "=" << X << endl;//salida
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
  A = "19_2";//operador de asignación
  B = "19_2";
  if(A==B) {
    cout << "A:" << A << " y B:" << B << " son iguales." << endl; //salida
   }
    
  if(B!=C){
    cout << "B:" << B << " y C:" << C << " son distintos." << endl;//salida
   }
  cout << endl;
  
  //Mayor Menor
  racional Y(4,5), Z(7,10);
  racional X2;
  cout << "Y:" << Y << " Z:" << Z << endl;
  X = Y<Z?Y:Z;
  X2 = Y>Z?Y:Z;
  cout << "X:" << X << " contiene el menor entre Z e Y" << endl;//salida
  cout << "X2:" << X2 << " contiene el mayor entre Z e Y" << endl;//salida
  cout << endl;
  
  //Mayor/Menor o igual
  A = "4_3"; B = "7_5"; C = "3_4"; Y = "4_3";
  cout << "A:" << A << " B:" << B << " C:" << C << " Y:" << Y << endl;
  
  if(A<=Y)
    X = A;
  else 
    X ="4321_1234";
    
  if(A<=B)
    X2 = A;
  else
    X2=B;
  
  cout << "X:" << X << " contiene el menor o igual entre A e Y" << endl;//A y C son iguales
  cout << "X2:" << X2 << " contiene el menor o igual entre A y B" << endl;//A es menor que B
  
  if(A>=C)
    X = A;
  else 
    X ="4321_1234";
  
 if(A>=B)
    X2 = A;
  else
    X2=B;
  
  cout << "X:" << X << " contiene el mayor o igual entre A y C" << endl;//A y C son iguales
  cout << "X2:" << X2 << " contiene el mayor o igual entre A e Y" << endl;//A es mayor que Y
  
  return 0;
}

















