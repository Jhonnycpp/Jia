#ifndef NEURON_H
#define NEURON_H


class Neuron
{
    public:
        Neuron();
        virtual ~Neuron();
    protected:
        Neuron *next;
        Neuron *prior;
        vector<Neuron> *connection;
        float weight = 0;
        bool active = false;
    private:
};

#endif // NEURON_H
