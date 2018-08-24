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

float Neuron::getWeight()
{
    return this->weight;
}
void Neuron::setWeight(float weight)
{
    this->weight = weight;
}

Neurons::Neurons()
{

}

Neurons::~Neurons()
{

}

void Neurons::add(Neuron* neuron)
{
    this->push_back(neuron);
}

void Neurons::add(Neuron neuron)
{
    this->push_back(&neuron);
}

Neuron* Neurons::take(int index)
{
    Neuron* neuron = this->at(index);
    this->removeAt(index);
    return neuron;
}

void Neurons::removeAt(Neuron* neuron)
{
    remove(this->begin(), this->end(), neuron);
}

void Neurons::removeAt(int index)
{
    this->erase(this->begin()+index);
}
