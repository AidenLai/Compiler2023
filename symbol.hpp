#include <iostream>
#include <string>

using namespace std;

class Symbol {
public:
    string id;

    Symbol(string id_)
    {
        id = id_;
    }

    ~Symbol(){};

    bool operator == (string id_)
    {
        return this->id == id_;
    }
};