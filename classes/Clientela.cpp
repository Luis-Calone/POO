#include <iostream>
#include <list>
#include "../headers/Clientela.h"

Clientela::Clientela(){
}

Clientela::~Clientela(){
    this->limpaLista();
}

Cliente* Clientela::getClientes(int index){
    if (index > 0 && index <= this->clientes.size()){
        auto it = this->clientes.begin();
        advance(it,index - 1);

        return *it;
    }

    return nullptr;
}

int Clientela::adicionaClientes(Cliente *cliente){
    if(!cliente){
        return 0;
    }

    this->clientes.push_back(cliente);

    return 1;
}

int Clientela::removeClientes(Cliente *cliente){
    if(!cliente){
        return 0;
    }

    for (auto it = this->clientes.begin(); it != this->clientes.end(); ++it){
        if (*it == cliente) {
            delete *it;
            this->clientes.erase(it);
        }
    }

    return 1;
}

int Clientela::limpaLista(){
    for(Cliente* i : this->clientes){
        delete i;
    }

    this->clientes.clear();

    return 1;
}
