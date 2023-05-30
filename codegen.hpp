#include <iostream>
#include <fstream>
#include "symboltable.hpp"
using namespace std;

extern ofstream ex;
extern string className;

void G_init()
{
    ex << "class " << className << "{\n";
}

void G_end()
{
    ex << "}\n";
}

void G_main()
{
    ex << "\tmethod public static void main(java.lang.String[])"
     << "\n";
  ex << "\tmax_stack 15"
     << "\n";
  ex << "\tmax_locals 15"
     << "\n"
     << "\t{"
     << "\n";
}

void G_main_end()
{
    ex << "\t}\n";
}

void G_global_Var(string id)
{
    ex << "\tfield static int " << id << "\n";
}

void G_global_Var(string id, int value)
{
    ex << "\tfield static int " << id << " = " << value << "\n";
}

void G_local_Var(int index)
{
    ex << "\t\tistore " << index << "\n";
}

void G_local_Var(int index, int value)
{
    ex << "\t\tsipush " << value << "\n";
    ex << "\t\tistore " << index << "\n";
}

void G_put_Start()
{
  ex << "\t\tgetstatic java.io.PrintStream java.lang.System.out" << endl;
}

void G_put(type idType)
{

  string type = "";
  switch (idType)
  {
  case type::INT_TYPE:
    type = "int";
    break;
  case type::STRING_TYPE:
    type = "java.lang.String";
    break;
  default:
    type = "int";
    break;
  }
  ex << "\t\tinvokevirtual void java.io.PrintStream.print(" << type << ")\n";
}

void G_skip()
{
  ex << "\t\tgetstatic java.io.PrintStream java.lang.System.out" << endl;
  ex << "\t\tinvokevirtual void java.io.PrintStream.println()\n";
}

void G_const_Str(string s)
{
  ex << "\t\tldc \"" << s << "\"" << endl;
}

void G_const_Int(int i)
{
  ex << "\t\tsipush " << i << endl;
}

void G_const_Bool(bool b)
{
    if(b)
        ex << "\t\ticonst_1" << endl;
    else
        ex << "\t\ticonst_0" << endl;
}

void G_IReturn()
{
  ex << "\t\tireturn"
     << "\n";
}

void G_Return()
{
  ex << "\t\treturn"
     << "\n";
}

void G_get_global_Var(string id)
{
  ex << "\t\tgetstatic int " << className << "." << id << "\n";
}

void G_get_local_Var(int idIndex)
{
  ex << "\t\tiload " << idIndex << "\n";
}

void G_Operator(char op)
{
  switch (op)
  {
  case 'm':
    ex << "\t\tineg"
       << "\n";
    break;
  case '*':
    ex << "\t\timul"
       << "\n";
    break;
  case '/':
    ex << "\t\tidiv"
       << "\n";
    break;
  case '+':
    ex << "\t\tiadd"
       << "\n";
    break;
  case '-':
    ex << "\t\tisub"
       << "\n";
    break;
  case '!':
    ex << "\t\tldc 1"
       << "\n"
       << "\t\tixor"
       << "\n";
    break;
  case '&':
    ex << "\t\tiand"
       << "\n";
    break;
  case '|':
    ex << "\t\tior"
       << "\n";
    break;
  case '%':
    ex << "\t\tirem"
       << "\n";
    break;
  }
}