#ifndef MESA_H
#define MESA_H


class Mesa
{
public:
    int maxPessoas;
    bool ocupado;

public:
    Mesa();
    void alteraEstado(); //ocupa ou desocupa a mesa
    bool getEstado(); // retorna o estado da mesa

};

#endif // MESA_H
