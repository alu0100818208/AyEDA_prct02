#include "natural2.hpp"


//Aritméticos
natural2 operator+(const natural2& a, const natural2& b)
{
  vector<unsigned int> n, auxa, auxb;
  unsigned int tam;
  bool a_b;
  auxa = a.get_numero();
  auxb = b.get_numero();
  unsigned int tam2;
  
  if(auxa.size() < auxb.size())
  {
    tam = auxa.size();
    tam2 = auxb.size();
    n = auxb;
    a_b = false;
    
  } else
    {
      tam = auxb.size();
      tam2 = auxa.size();
      n = auxa;
      a_b = true;
    }
    
    unsigned int carry = 0;
    bool tam_t;//si los tamaños son iguaeles
    tam_t = (auxa.size()==auxb.size()?true:false);
  
    /*for(int i = tam -1;i > -1; i--)
    {
      if(a_b) { //n + auxb
	
	n[tam2-1] = (n[tam2-1]+auxb[i]+carry)%10;
	carry = (n[i]+auxb[i]+carry)/10;
	tam2--;
	
      } else { //n + auxa
	
	n[tam2-1] = (n[tam2-1]+auxa[i]+carry)%10;
	carry = (n[i]+auxa[i]+carry)/10;
	tam2--;
	
      }
    }*/
    
    if(carry == 1) {
    
      if(tam_t) {
      
	editsize(n);
	
      } else {
      
	for(int j = tam2 -1;j>-1;j--) {
	
	  n[j] = (n[j]+carry)%10;
	  
	}
	
      }
    }
    
    return nutural2(n);
}

/*natural2 operator-(const natural2& a, const natural2& b)
{
  int a_t = a.get_numero();
  int b_t = b.get_numero();
  
  if((a_t-b_t)<0) {
    
    cout << "Error, el resultado de la resta no es un número natural2" << endl;
    return 0;
    
  } else {
    
      return natural2(a.get_numero() - b.get_numero());
      
  }
}

natural2 operator*(const natural2& a, const natural2& b)
{
  return natural2(a.get_numero() * b.get_numero());
}

natural2 operator/(const natural2& a, const natural2& b)
{
  return natural2(a.get_numero() / b.get_numero());
}

//comparación
bool operator==(const natural2& a, const natural2& b)
{
  return(a.get_numero()==b.get_numero() ? true:false);
}

bool operator!=(const natural2& a, const natural2& b)
{
  return(a==b ? false:true);
}

bool operator<(const natural2& a, const natural2& b)
{
  return(a.get_numero()<b.get_numero() ? true:false);
}

bool operator>(const natural2& a, const natural2& b)
{
  if(a!=b) {
    return(a<b ? false:true);
  } else {
    return false;
  }
}

bool operator<=(const natural2& a, const natural2& b)
{
  return(a>b ? false:true);
}

bool operator>=(const natural2& a, const natural2& b)
{
  return(a<b ? false:true);
}
*/
//Entrada-Salida
ostream& operator<<(ostream& os, const natural2& a)
{
  os << a.get_numero();
  return os;
}

istream& operator>>(istream& is, natural2& a)
{
  unsigned int n;
  is >> n;
  a = natural2(n);
  return is;
}

int main() {

  natural2 A, X;//constructor por defecto
  natural2 B("544444444446548456");//constructor de asignación
  natural2 C("99658645565489654");//constructor de copia
  
  //Entrada
  cout << "Elige un valor para A" << endl;
  cin >> A;

//OPERADORES ARITMÉTICOS  
  
  //suma
  X = A + B + C;
  cout << "Suma: " << A << "+" << B << "+" << C << "=" << X << endl;//salida
  
/*  //resta
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
  A = 4;//operador de asignación
  B = 4;
  if(A==B) {
    cout << "A:" << A << " y B:" << B << " son iguales." << endl; //salida
   }
    
  if(B!=C){
    cout << "B:" << B << " y C:" << C << " son distintos." << endl;//salida
   }
  
  //Mayor Menor
  natural2 Y(4), Z(7);
  natural2 X2;
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
  cout << "X2:" << X2 << " contiene el mayor o igual entre A e Y" << endl;//A es mayor que Y*/
  
  return 0;
}

















