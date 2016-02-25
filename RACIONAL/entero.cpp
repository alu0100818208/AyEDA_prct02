#include "entero.hpp"

entero::entero(void):
numero(0)
{}

entero::entero(int n):
numero(n)
{}

entero::entero(const entero& n) 
{
  *this = n;
}

entero::~entero(void){}

int entero::get_numero(void) const
{
  return numero;
}

entero& entero::operator=(const entero& a)
{
  numero = a.get_numero();
  
  return *this;
}

entero& entero::operator=(const int& n)
{
  numero = n;
  return *this;
}