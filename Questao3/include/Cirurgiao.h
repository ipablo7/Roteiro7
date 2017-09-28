#ifndef CIRURGIAO_H
#define CIRURGIAO_H


class Cirurgiao : public Medico
{
    public:
        Cirurgiao();
        virtual ~Cirurgiao();
        void setEspecializacao(string);
        string getEspecializacao;
        void fazTrabalho();
    private:
        string especializacao;
};

#endif // CIRURGIAO_H
