#include <vector>
#include <algorithm>
#include "symbol.hpp"

using namespace std;

class SymbolTable {
    public:
        vector<Symbol> table;
        SymbolTable();
        ~SymbolTable(){};
        void insert(string id)
        {
            if(!lookup(id))
                table.push_back(Symbol(id));
        }
        bool lookup(string id)
        {
            vector<Symbol>::iterator it = find(table.begin(), table.end(), id);
            return it != table.end();
        }
        void dump()
        {
            for(vector<Symbol>::iterator it = table.begin(); it != table.end(); ++it)
                cout << it->id << endl;
        }
};