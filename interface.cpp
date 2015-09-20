#include "interface.h"
//ADICIONAR O RESTO DOS INCLUDES
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

using namespace std;

void Interface::LimpaTela(){
	system("pause");
	system("cls");
}

void Interface::LimpaEntrada(){
	cin.clear();
	cin.ignore(INT_MAX,'\n');
}

Interface::Interface(){
    // if (database.empty())
    cout << "Primeira inicialização do sistema RESTAURANTE.\n\n        SEJA BEM VINDO\n";
    LimpaTela();
    cout << "A seguir faremos algumas questões para inicializarmos\no nosso sistema, por favor, responda-as corretamente\n";
    LimpaTela();
    cout << "Insira o nome do Restaurante\n\n";
    string nomeDoRestaurante;
    getline(cin,nomeDoRestaurante);
    cout << "\nInsira o nome do Dono\n\n";
    string nomeDoDono;
    getline(cin,nomeDoDono);
    cout << "\nInsira o endereço do restaurante\n-------------------------------------------\nNome da rua\\avenida\n\n";
    string enderecoRua;
    getline(cin,enderecoRua);
    cout << "\nBairro\n\n";
    string enderecoBairro;
    getline(cin,enderecoBairro);
    cout << "\nNumero\n\n";
    int enderecoNumero;
    cin >> enderecoNumero;
    LimpaEntrada();
    cout << "\nPais\n\n";
    string enderecoPais;
    getline(cin,enderecoPais);
    cout << "\nEstado\n\n";
    string enderecoEstado;
    getline(cin,enderecoEstado);
    cout << "\nCidade\n\n";
    string enderecoCidade;
    getline(cin,enderecoCidade);
    //else (aquele da db.empty)
    while(1){
    cout << "O que deseja fazer?\n\n"
    cout << "(1)Pedido\n";
    cout << "(2)Mesa\n";
    cout << "(3)Relatórios\n";
    cout << "(4)Funcionários\n";
    cout << "(5)Produtos\n";
    cout << "(6)Fechar\n";
    int buffer1,buffer2;
    cin >> buffer1;
    LimpaEntrada();
    LimpaTela();
    if(buffer1 == 6) return;
    switch (buffer1){
    case(1):
        cout << "Opcoes: Pedido\n\n";
        cout << "(1)Fazer pedido\n";
        cout << "(2)Status dos pedidos\n";
        cout << "(3)Modificar pedido\n";
        cout << "(4)Cancelar pedido\n";
        cin >> buffer2;
        LimpaEntrada();
        LimpaTela();
        break;
    case(2):
        cout << "Opcoes: Mesa\n\n";
        cout << "(1)Ocupar mesa\n";
        cout << "(2)Desocupar mesa\n";
        cout << "(3)Pedidos da mesa\n";
        cout << "(4)Criar mesa\n";
        cout << "(5)Destruir mesa\n";
        cout << "(6)Voltar ao menu inicial\n"
        cin >> buffer2;
        LimpaEntrada();
        LimpaTela();
        switch(buffer2){
        case(1):
            cout << "Qual mesa deseja ocupar?\n";
            int numMesa;
            cin >> numMesa;
            LimpaEntrada();
            cout << "\nQuantas pessoas?\n";
            int qtdPessoas;
            cin >> qtdPessoas;
            LimpaEntrada();
            LimpaTela();
            cout << "Mesa ocupada!!!\n\n";
            LimpaTela();
            //Função de alocar mesa aqui com os dados de cima
            break;
        case(2):
        case(3):
        case(4):
        case(5):
        case(6):
            LimpaTela();
            break;
        default:
        }
        break;
    case(3):
        cout << "Opcoes: Relatorios\n\n";
        cout << "(1)Pedidos neste momento\n";
        cout << "(2)Status das mesas abertas\n";
        cout << "(3)Relacao de funcionarios\n";
        cin >> buffer2;
        LimpaEntrada();
        LimpaTela();
        break;
    case(4):
        cout << "Opcoes: Funcionarios\n\n";
        cout << "(1)Adicionar funcionario\n";
        cout << "(2)Deletar funcionario\n";
        cout << "(3)Mostrar funcionario\n";
        cout << "(4)Alterar funcionario\n";
        cin >> buffer2;
        LimpaEntrada();
        LimpaTela();
        break;
    case(5):
        cout << "Opcoes: Produtos\n\n";
        cout << "(1)Adicionar produto ao estoque\n";
        cout << "(2)Alterar produto do estoque\n";
        cout << "(3)Criar receita\n";
        cout << "(4)Alterar receita\n";
        cout << "(5)Deletar receita\n";
        cin >> buffer2;
        LimpaEntrada();
        LimpaTela();
        break;
        default:
    }
    }
}


