#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H


class Oftalmologista : public Medico
{
    public:
        Oftalmologista();
        virtual ~Oftalmologista();
        void setEspecializacao(string);
        string getEspecializacao;
        void fazTrabalho();
    private:
};

#endif // OFTALMOLOGISTA_H
