#include "real.hpp"

real::real(void):
numero(0)
{}

real::real(float n):
numero(n)
{}

real::real(const real& n) 
{
  *this = n;
}

real::~real(void){}

float real::get_numero(void) const
{
  return numero;
}

real& real::operator=(const real& a)
{
  numero = a.get_numero();
  
  return *this;
}

real& real::operator=(const float& n)
{
  numero = n;
  return *this;
}

real real::raiz(void) 
{
  return real(sqrt(numero));
}