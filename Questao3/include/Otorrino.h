#ifndef OTORRINO_H
#define OTORRINO_H


class Otorrino : public Medico
{
    public:
        Otorrino();
        virtual ~Otorrino();
        void setEspecializacao(string);
        string getEspecializacao;
        void fazTrabalho();
    private:
};

#endif // OTORRINO_H
