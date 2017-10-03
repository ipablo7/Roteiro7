#ifndef HOSPITAL_H
#define HOSPITAL_H
#include "Medico.h"
#include "Cirurgiao.h"
#include "Ginecologista.h"
#include "Oftalmologista.h"
#include "Otorrino.h"
#include <iostream>
#include <string>

class Hospital
{
    public:
        Hospital();
        virtual ~Hospital();
        void exibeMedicos();
    private:
        Medico med;
        Cirurgiao cir;
        Ginecologista gin;
        Oftalmologista oftal;
        Otorrino otorrino;
};

#endif // HOSPITAL_H
