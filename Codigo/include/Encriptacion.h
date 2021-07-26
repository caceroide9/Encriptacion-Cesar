#ifndef ENCRIPTACION_H
#define ENCRIPTACION_H


class Encriptacion
{
    public:
        Encriptacion(char,char);
        void nuevallave();
        void encriptar();
        void desincriptar();

        virtual ~Encriptacion();
        Encriptacion(const Encriptacion& other);

    protected:

    private:
        char mensaje[30];
        char llave[30];
};

#endif // ENCRIPTACION_H
