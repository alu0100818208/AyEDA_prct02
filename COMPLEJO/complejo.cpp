#include "complejo.hpp"

complejo::complejo(void):
r(),
i(),
m()
{}

complejo::complejo(real re, real im):
r(re),
i(im)
{
  m = r*r+i*i;
}

complejo::complejo(const complejo& n) 
{
  *this = n;
}

complejo::complejo(float re, float im):
r(real(re)),
i(real(im))
{
  m = r*r+i*i;
}

complejo::~complejo(void){}

real complejo::get_r(void) const
{
  return r;
}

real complejo::get_i(void) const
{
  return i;
}

real complejo::get_m(void) const
{
  return m;
}

complejo& complejo::operator=(const complejo& a)
{
  i = a.get_i();
  r = a.get_r();
  
  return *this;
}

complejo& complejo::operator=(const string a)
{
  size_t found = a.find("+");
  
  string b,c;
  b.resize(found);
  c.resize((a.size() - found)-2);
  for(unsigned int k=0;k<found;k++) {
  
   b[k] = a[k];
  }
  for(unsigned int j=0;j<c.size();j++) {
  
    c[j] = a[j+1+found];
  }
  
  r = atof(b.c_str());
  i = atof(c.c_str());
}
