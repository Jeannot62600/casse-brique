#ifndef LFORM_H
#define LFORM_H
#include <list>

class form;

class lform{
protected:
  list<form*> L;
  list<form*>::iterator it;
public:
  lform();
  ~lform();
  void ajoute(form*);
  void supprime(form*);
  void affiche(BITMAP *);
};

#endif // FORM_H
