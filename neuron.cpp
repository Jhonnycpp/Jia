#include "Neuron.h"

using namespace Core;

Neuron::Neuron()
{
    this->weight = 0;
    this->active = false;
}

Neuron::~Neuron()
{
    //dtor
}

bool Neuron::operator==(Neuron& l)const{
    return false;
}

Neurons::Neurons()
{

}

Neurons::~Neurons()
{

}

void Neurons::add(Neuron* neuron)
{

}

Neuron* Neurons::take(int index)
{
    return nullptr;
}

void Neurons::removeAt(Neuron* neuron)
{
    auto e = std::find(this->begin(), this->end(), neuron);
    if (e != this->end())
        this->erase(e);
}

void Neurons::removeAt(int index)
{
    this->erase(this->begin()+index);
}
