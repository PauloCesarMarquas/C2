#ifndef INTERFACE_H
#define INTERFACE_H

using namespace std;

class Interface{
public:
	Interface(); //Cria a interface e faz tudo que deve fazer
	void static LimpaTela(); //Função feita pra Limpar a Tela
	void static LimpaEntrada(); //Função pra limpar entrada cin
	~Interface(); //Destrói a tela e finaliza tudo
};

#endif // INTERFACE_H
