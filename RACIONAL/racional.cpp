#include "racional.hpp"
#include "cmath"



//En los constructores cada numero racional se expresa en su forma mínima, dividiendo tanto numerador como denominador por el maximo común divisor
racional::racional(void):
numerador(),
denominador()
{}

racional::racional(entero dio, entero dir):
numerador(dio),
denominador(dir),
mcd(m_d())
{
  numerador = numerador/mcd;
  denominador = denominador/mcd;
}

racional::racional(int dio, int dir):
numerador(entero(dio)),
denominador(entero(dir)),
mcd(m_d())
{
  numerador = numerador/mcd;
  denominador = denominador/mcd;
}

racional::racional(const racional& n) 
{
  *this = n;
}

racional::~racional(void){}

entero racional::get_numerador(void) const
{
  return numerador;
}

entero racional::get_denominador(void) const
{
  return denominador;
}

racional& racional::operator=(const racional& a)
{
  numerador = a.get_numerador();
  denominador = a.get_denominador();
  mcd=a.m_d();
  
  return *this;
}

racional& racional::operator=(const string a)
{
  size_t found = a.find("_");
  
  string b,c;
  b.resize(found);
  c.resize((a.size() - found)-1);
  for(unsigned int i=0;i<found;i++) {
  
   b[i] = a[i];
  }
  for(unsigned int j=0;j<c.size();j++) {
  
    c[j] = a[j+1+found];
  }
  
  numerador = atoi(b.c_str());
  denominador = atoi(c.c_str());
  mcd=m_d();
  numerador = numerador/mcd;
  denominador = denominador/mcd;
  
}

entero racional::m_d(void) const //algoritmo de Euclides
{
  entero resto, numerador_aux, resto_aux;
  
  resto = numerador.get_numero()%denominador.get_numero();
  numerador_aux = denominador;
  
  while(resto!=0)
  {
   resto_aux = resto;
   resto = numerador_aux.get_numero()%resto.get_numero();
   numerador_aux = resto_aux;
  }
  
  return numerador_aux;
}