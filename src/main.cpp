#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> t;
    t.push_back(1);
    t.push_back(2);
    t.push_back(2);

    for(int it : t)
        cout << it << endl;

    cout << "Hello word" << endl << endl;
}
