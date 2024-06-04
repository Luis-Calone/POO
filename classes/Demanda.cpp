#include <iostream>
#include <list>
#include "../headers/Demanda.h"

Demanda::Demanda(){
}
Demanda::~Demanda(){
    this->limpaLista();
}

Pedido* Demanda::getPedidos(int index){
    if (index > 0 && index <= this->pedidos.size()){
        auto it = this->pedidos.begin();
        advance(it,index - 1);

        return *it;
    }

    return nullptr;
}

int Demanda::adicionaPedidos(Pedido *pedido){
    if(!pedido){
        return 0;
    }

    this->pedidos.push_back(pedido);

    return 1;
}

int Demanda::removePedidos(Pedido *pedido){
    if(!pedido){
        return 0;
    }

    for (auto it = this->pedidos.begin(); it != this->pedidos.end(); ++it){
        if (*it == pedido) {
            delete *it;
            this->pedidos.erase(it);
        }
    }

    return 1;
}

int Demanda::limpaLista(){
    for(Pedido* i : this->pedidos){
        delete i;
    }

    this->pedidos.clear();

    return 1;
}