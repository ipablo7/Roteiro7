#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H


class Ginecologista : public Medico
{
    public:
        Ginecologista();
        virtual ~Ginecologista();
        void setEspecializacao(string);
        string getEspecializacao;
        void fazTrabalho();
    private:
};

#endif // GINECOLOGISTA_H
