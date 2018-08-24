#include <iostream>
#include "neuron.h"

using namespace std;
using namespace Core;

int main()
{
    Neurons nn;
    Neuron n;
    Neuron d;
    Neuron *e = new Neuron();

    e->setWeight(5);
    n.setWeight(10);
    d.setWeight(20);

    nn.add(e);
    nn.add(d);
    nn.add(n);

    for (auto it : nn)
        cout << "Peso: " << it->getWeight() << endl;
    cout << "Hello world!" << endl;
    return 0;
}
