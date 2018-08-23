#ifndef NEURON_H
#define NEURON_H
#include <algorithm>
#include <vector>

using namespace std;

namespace Core
{
class Neuron;
class Neurons;

class Neuron
{
public:
    Neuron();
    virtual ~Neuron();
    Neuron* getNext();
    void setNext(Neuron* next);
    Neuron* getPrior();
    void setPrior(Neuron* prior);
    Neurons* getConnections();
    float getWeight();
    void setWeight(float weight);
    void getActive();
    bool setActive(bool active);
    bool operator==(Neuron& l)const;
protected:
    Neuron* next;
    Neuron* prior;
    Neurons* connections;
    float weight;
    bool active;
};

class Neurons: public vector<Neuron>
{
public:
    Neurons();
    virtual ~Neurons();
    void add(Neuron* neuron);
    Neuron* take(int index);
    void removeAt(Neuron* neuron);
    void removeAt(int index);
};
}
#endif // NEURON_H
