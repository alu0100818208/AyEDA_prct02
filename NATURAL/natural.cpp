#include "natural.hpp"

natural::natural(void):
numero(0)
{}

natural::natural(unsigned int n):
numero(n)
{}

natural::natural(const natural& n) 
{
  *this = n;
}

natural::~natural(void){}

unsigned int natural::get_numero(void) const
{
  return numero;
}

natural& natural::operator=(const natural& a)
{
  numero = a.get_numero();
  
  return *this;
}

natural& natural::operator=(const unsigned int& n)
{
  numero = n;
  return *this;
}