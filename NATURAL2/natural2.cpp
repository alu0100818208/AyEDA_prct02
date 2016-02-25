#include "natural2.hpp"

natural2::natural2(void):
numero(vector<unsigned int> n)
{}

natural2::natural2(const string& n)
{
  numero.resize(n.size());
  
  for(int i=0;i<n.size();i++)
  {
    numero[i] = atoi(n[i].c_str());
  }
}

natural2::natural2(const natural2& n) 
{
  *this = n;
}

natural2::natural_i(vector<unsigned int> n)
{
  numero = n;
}

natural2::~natural2(void){}

vector<unsigned int> natural2::get_numero(void) const
{
  return numero;
}

natural2& natural2::operator=(const natural2& a)
{
  numero = a.get_numero();
  
  return *this;
}

natural2& natural2::operator=(const string& n)
{
  numero.resize(n.size());
  
  for(int i=0;i<n.size();i++)
  {
    numero[i] = atoi(n[i].c_str());
  }
  return *this;
}

natural2& natural2::operator=(const vector<unsigned int> n)
{
  numero = n;
  
  return *this;
}

void natural2::editsize(vector<unsigned int>& n)
{
  n.insert(n.begin(),1);
}