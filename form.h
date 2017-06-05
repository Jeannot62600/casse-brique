#ifndef FORM_H
#define FORM_H
#include "lform.h"
class form
{
    public:
        form();
        static lform& gett();
        virtual ~form();
        virtual void affiche(BITMAP*)=0;
    protected:
      static lform t;
    private:
};

#endif // FORM_H
