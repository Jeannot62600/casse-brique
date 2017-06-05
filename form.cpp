#include "form.h"

form::form(){
  t.ajoute(this);
}

form::form(){
  t.supprime(this);
}

lform& form::gett(){
  return t;
}
