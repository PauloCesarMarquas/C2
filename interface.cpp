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
    cout << "(6)Fornedor\n";
    cout << "(7)Fechar\n";
    int buffer1,buffer2;
    cin >> buffer1;
    LimpaEntrada();
    LimpaTela();
    if(buffer1 == 7) return;
    switch (buffer1){
    case(1):
        cout << "Opcoes: Pedido\n\n";
        cout << "(1)Fazer pedido\n";
        cout << "(2)Status dos pedidos\n";
        cout << "(3)Modificar pedido\n";
        cout << "(4)Cancelar pedido\n";
        cout << "(5)Voltar ao menu inicial\n";
        cin >> buffer2;
        LimpaEntrada();
        LimpaTela();
        switch(buffer2){
        case(6):
            break;
        case(1):
            cout << "Codigo do pedido"
        case(2):
        case(3):
        case(4):
        case(5):
        default:
        }
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
            //IF MESA DESOCUPADA
            cout << "\nQuantas pessoas?\n";
            int qtdPessoas;
            cin >> qtdPessoas;
            LimpaEntrada();
            LimpaTela();
            cout << "Mesa ocupada!!!\n\n";
            //Indexar os dados ao objeto mesa
            //Função de alocar mesa aqui com os dados de cima
            //ELSE COUT << MESA OCUPADA
            LimpaTela();
            break;
        case(2):
            cout << "Qual mesa deseja descoupar?\n";
            int numMesa;
            cin >> numMesa;
            LimpaEntrada();
            LimpaTela();
            //IF MESA OCUPADA
            cout << "Conta da mesa: "; //FUNÇÃO QUE DIZ A CONTA DA MESA;
            cout << "\n\nDeseja fechar a mesa? (S) ou (N)\n";
            char choice;
            cin >> choice;
            LimpaEntrada();
            if(choice == 'S'){
                cout << "\n\nMESA FECHADA COM SUCESSO!\n";
            }
            else if(choice == 'N'){
                cout << "\n\nMESA NAO FOI FECHADA!\n"
            }
            else{
                cout << "\n\nOPCAO DESCONHECIDA\n";
            }
            //ELSE COUT  "MESA NAO OCUPADA
            LimpaTela()
            break;
        case(3):
            cout << "Qual mesa deseja verificar os pedidos?\n\n";
            //IF MESA OCUPADA
            //AQUI PRECISA PERCORRER NO BD A PARADA E DAR UM COUT DOS PEDIDOS
            //IF PEDIDOS.EMPTY == TRUE COUT << NAO HA PEDIDOS NA MESA
            //CONTA QUE TA NA MESA
            //ELSE COUT << MESA NAO OCUPADA
            LimpaTela();
            break;
        case(4):
            cout << "A nova mesa tem quantos lugares?\n";
            int numPessoas;
            cin >> numPessoas;
            LimpaEntrada();
            LimpaTela();
            //FUNÇÃO QUE CRIA A FUCKING MESA NOVA
            cout << "Mesa criada com sucesso!\n\n"
            cout << "Numero: "; //COLOCAR O NUMERO DA MESA
            cout << "Quantidade de pessoas: " //NUMERO DE PESSOAS QUE CABEM
            LimpaTela();
            break;
        case(5):
            cout << "Qual mesa deseja deletar?\n";
            int numMesa;
            cin >> numMesa;
            LimpaEntrada();
            //IF MESA EXISTE
            cout << "Mesa encontrada. Deseja deleta-la? (S) ou (N)\n";
            char choice;
            cin >> choice;
            LimpaEntrada();
            if(choice == 'S'){
                //deleta a fucking mesa
                cout << "Mesa deletada com sucesso!\n\n";
            }
            else if(choice == 'N'){
                cout << "Mesa nao deletada\n\n";
            }
            else{
                cout << "Opcao desconhecida\n\n";
            }
            break;
        case(6):
            break;
        default:
        }
        break;
    case(3):
        cout << "Opcoes: Relatorios\n\n";
        cout << "(1)Pedidos neste momento\n";
        cout << "(2)Status das mesas abertas\n";
        cout << "(3)Relacao de funcionarios\n";
        cout << "(4)Código dos produtos\n";
        cout << "(5)Voltar ao menu inicial\n";
        cin >> buffer2;
        LimpaEntrada();
        LimpaTela();
        switch(buffer2){
        case(5):
            break;
        case(1):
            //PERCORRE OS PEDIDOS DA MESA E FALA QUENHÉ O QUE E QUANTO VALE CADA COISA. COLOCA TAMBÉM NUMERO DE PESSOAS
            break;
        case(2):
            //PERCORRE OS PARANAUES DAS MESAS ABERTAS. DIGA O VALOR QUE DA CONTA EMBAIXO DELA
            break;
        case(3):
            //PERCORRE OS FUNCIONARIOS DIZENDO O NOME, CARGO E SALÁRIO
            break;
        case(4):
            //PERCORRE OS PRODUTOS E MOSTRA ELES TUDO
        default:
        }
        break;
    case(4):
        cout << "Opcoes: Funcionarios\n\n";
        cout << "(1)Adicionar funcionario\n";
        cout << "(2)Deletar funcionario\n";
        cout << "(3)Mostrar funcionario\n";
        cout << "(4)Alterar funcionario\n";
        cout << "(5)Voltar ao menu inicial\n";
        cin >> buffer2;
        LimpaEntrada();
        LimpaTela();
        switch(buffer2){
        case(5):
            break;
        case(1):
            cout << "Nome do novo funcionario\n";
            string nomeFuncionario;
            getline(cin,nomeFuncionario);
            cout << "\nCargo\n";
            string cargoFuncionario;
            getline(cin,cargoFuncionario);
            cout << "\nSalario\n";
            double salarioFuncionario;
            cin >> salarioFuncionario;
            LimpaEntrada();
            cout << "\nCPF\n";
            long int cpfFuncionario;
            while(!(cin >> cpfFuncionario)){
                cin.clear();
                cin.ignore(256,'\n');
            }
            LimpaTela();
            cout << "Endereco do funcionario\n\nRua/Avenida\n";
            string ruaFuncionario;
            getline(cin,ruaFuncionario);
            cout << "\nBairro\n";
            string bairroFuncionario;
            getline(cin,bairroFuncionario);
            cout << "\nNumero\n";
            int numeroFuncionario;
            cin >> numero;
            while(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize::max()>,'\n');
                cout << "\nNumero invalido, insira novamente\n";
                cin >> numeroFuncionario;
            }
            cout << "Data de nascimento (DD/MM/AAAA)";
            string dataNascimentoFuncionario;
            getline(cin,dataNascimentoFuncionario);
            while((dataNascimentoFuncionario.length() != 10)&& (dataNascimentoFuncionario[2] != '/') && (dataNascimentoFuncionario[5] != '/')){
                cout << "\nData no formato errado. Insira novamente\n";
                dataNascimentoFuncionario.clear();
                getline(cin,dataNascimentoFuncionario);
            }
            LimpaEntrada();
            LimpaTela();
            //CRIA O FUNCIONARO E ALOCA ELE LÁ NO BD
            break;
        case(2):
            cout << "Nome do funcionario\n";
            string nomeFuncionario;
            getline(cin,nomeFuncionario);
            //IF FUNCIONARIO EXISTE
            //APRESENTA INFO DELE
            cout << "Deseja deletar este funcionário? (S) ou (N)";
            char choice;
            cin >> choice;
            LimpaEntrada();
            if(choice == 'S'){
                //BLOQUEIA FUNCIONARIO DO BD
                cout << "Funcionario deletado\n\n";
            }
            else if(choice == 'N'){
                cout << "Funcionario nao deletado\n\n";
            }
            else{
                cout << "Comando desconhecido\n\n";
            }
            LimpaTela();
            break;
        case(3):
            cout << "Nome do funcionario\n";
            string nomeFuncionario;
            getline(cin,nomeFuncionario);
            //IF FUNCIONARIO TA NO BD
            //MOSTRA OS PARANAUES DELE
            //else
            //cout << "\n\nFuncionario nao encontrado!\n;
            LimpaTela();
            break;
        case(4):
            cout << "Nome do funcionario\n";
            string nomeFuncionario;
            getline(cin,nomeFuncionario);
            //IF FUNCIONARIO EXISTE
            //MOSTRA OS PARANAUES DELE NA SEGUINTE ORDEM
            //NOME
            //CPF
            //DATA DE NASCIMENTO OU IDADE, TU DESCIDE
            //ENDERECO
                //RUA
                //BAIRRO
                //NUMERO
            /*
            cout << "O que deseja alterar?\n";
            cout << "(1)Nome\n";
            cout << "(2)CPF\n";
            cout << "(3)Data de nascimento\n";
            cout << "(4)Endereço\n";
            cout << "(5)Voltar ao menu inicial\n";
            int buffer3;
            cin >> buffer3;
            LimpaEntrada();
            LimpaTela();
            switch(buffer3){
            case(1):
                string nomeFuncionario;
                cout << "Insira o novo nome\n;
                getline(cin,nomeFuncionario);
                break;
            case(2):
                long int cpfFuncionario;
                cout << "Insira o novo cpf\n";
                getline(cin,cpfFuncionario);
                break;
            case(3):
                string dataNascimentoFuncionario;
                cout << "Insira a nova data de nascimento (DD/MM/AAAA)\n";
                getline(cin,dataNascimentoFuncionario);
                while((dataNascimentoFuncionario.length() !=10) && (dataNascimentoFuncionario[2]!='/') && (dataNascimentoFuncionario[5])!= '/'){
                    cout << "\nFormato invalido da data. Insira novamente\n";
                    getline(cin,dataNascimentoFuncionario);
                }
                break;
            case(4):
                string ruaFuncionario;
                cout << "Insira a nova rua/avenida\n";
                getline(cin,ruaFuncionario);
                cout << "\nInsira o novo bairro/avenida\n";
                string bairroFuncionario;
                getline(cin,bairroFuncionario);
                cout << "\nInsira o novo numero\n";
                int numFuncionario;
                while(!(cin >> numFuncionario)){
                    LimpaEntrada();
                }
                Limpa
                break;
            case(5):
                LimpaTela();
                break;
            default:
                cout << "Entrada invalida\n\n";
                LimpaTela();
                break;
        }
        */
        //ELSE
        //cout << "Usuario nao existe\n";


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


