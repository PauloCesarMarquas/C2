#ifndef PEDIDO_H
#define PEDIDO_H

#include "qstring.h"
#include "QDate"
#include "list"

class Pedido
{
public:
    int idGarcom;
    int idCliente;
    double gorjeta;
    List produtos;

public:
    Pedido();
    void addProdutoNoPedido();
    double addGorjeta();

};

#endif // PEDIDO_H
