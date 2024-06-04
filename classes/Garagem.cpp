#include <iostream>
#include <list>
#include "../headers/Garagem.h"

Garagem::Garagem(){
}

Garagem::~Garagem(){
    this->limpaLista();
}

Veiculo* Garagem::getVeiculos(int index){
    if (index > 0 && index <= this->veiculos.size()){
        auto it = this->veiculos.begin();
        advance(it,index - 1);

        return *it;
    }

    return nullptr;
}

int Garagem::adicionaVeiculos(Veiculo *veiculo){
    if(!veiculo){
        return 0;
    }

    this->veiculos.push_back(veiculo);

    return 1;
}

int Garagem::removeVeiculos(Veiculo *veiculo){
    if(!veiculo){
        return 0;
    }

    for (auto it = this->veiculos.begin(); it != this->veiculos.end(); ++it){
        if (*it == veiculo) {
            delete *it;
            this->veiculos.erase(it);
        }
    }

    return 1;
}

int Garagem::limpaLista(){
    for(Veiculo* i : this->veiculos){
        delete i;
    }

    this->veiculos.clear();

    return 1;
}
