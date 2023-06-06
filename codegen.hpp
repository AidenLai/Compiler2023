#include <iostream>
#include <fstream>
#include <stack>
#include "symboltable.hpp"
using namespace std;


struct label
{
  // count
  int Count;
  //flag
  int labelFlag;
  label(int input)
  {
    Count = input;
    labelFlag = -1;
  };
};

class LabelManager
{
private:
  int counts;

public:
  stack<label> labelStack;
  LabelManager()
  {
    counts = 0;
  }
  void pushNLable(int n)
  {
    labelStack.push(label(counts));
    counts += n;
  }
  void NLabel(int n)
  {
    labelStack.top().Count += n;
    counts += n;
  }
  void popLabel()
  {
    labelStack.pop();
  }
  int takeLabel(int n)
  {
    return labelStack.top().Count + n;
  }
  int getLable()
  {
    return counts++;
  }
  int getFlag()
  {
    return labelStack.top().labelFlag;
  }
};
LabelManager labelManager;

extern ofstream output;
extern string className;


enum class condition
{
  IFLT, //  <
  IFGT, //  >
  IFLE, //  <=
  IFGE, //  >=
  IFEE, //  ==
  IFNE, //
};



void G_init()
{
    output << "class " << className << "{\n";
}

void G_end()
{
    output << "}\n";
}

void G_main()
{
  output << "\tmethod public static void main(java.lang.String[])"
     << "\n";
  output << "\tmax_stack 15"
     << "\n";
  output << "\tmax_locals 15"
     << "\n"
     << "\t{"
     << "\n";
}

void G_main_end()
{
    output << "\t}\n";
}

void G_global_Var(string id)
{
    output << "\tfield static int " << id << "\n";
}

void G_global_Var(string id, int value)
{
    output << "\tfield static int " << id << " = " << value << "\n";
}

void G_local_Var(int index)
{
    output << "\t\tistore " << index << "\n";
}

void G_local_Var(int index, int value)
{
    output << "\t\tsipush " << value << "\n";
    output << "\t\tistore " << index << "\n";
}

void G_put_Start()
{
  output << "\t\tgetstatic java.io.PrintStream java.lang.System.out" << endl;
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
  output << "\t\tinvokevirtual void java.io.PrintStream.print(" << type << ")\n";
}

void G_skip()
{
  output << "\t\tgetstatic java.io.PrintStream java.lang.System.out" << endl;
  output << "\t\tinvokevirtual void java.io.PrintStream.println()\n";
}

void G_const_Str(string input)
{
  output << "\t\tldc \"" << input << "\"" << endl;
}

void G_const_Int(int input)
{
  output << "\t\tsipush " << input << endl;
}

void G_const_Bool(bool input)
{
    if(input)
        output << "\t\ticonst_1" << endl;
    else
        output << "\t\ticonst_0" << endl;
}

void G_IReturn()
{
  output << "\t\tireturn"
     << "\n";
}

void G_Return()
{
  output << "\t\treturn"
     << "\n";
}

void G_get_global_Var(string id)
{
  output << "\t\tgetstatic int " << className << "." << id << "\n";
}

void G_get_local_Var(int index)
{
  output << "\t\tiload " << index << "\n";
}

void G_Operator(char op)
{
  switch (op)
  {
  case 'm':
    output << "\t\tineg"
       << "\n";
    break;
  case '*':
    output << "\t\timul"
       << "\n";
    break;
  case '/':
    output << "\t\tidiv"
       << "\n";
    break;
  case '+':
    output << "\t\tiadd"
       << "\n";
    break;
  case '-':
    output << "\t\tisub"
       << "\n";
    break;
  case '!':
    output << "\t\tldc 1"
       << "\n"
       << "\t\tixor"
       << "\n";
    break;
  case '&':
    output << "\t\tiand"
       << "\n";
    break;
  case '|':
    output << "\t\tior"
       << "\n";
    break;
  case '%':
    output << "\t\tirem"
       << "\n";
    break;
  }
}

void G_Compare(condition cond)
{
  output << "\t\tisub" << endl;
  switch (cond)
  {
  case condition::IFLT:
    output << "\t\tiflt";
    break;
  case condition::IFGT:
    output << "\t\tifgt";
    break;
  case condition::IFLE:
    output << "\t\tifle";
    break;
  case condition::IFGE:
    output << "\t\tifge";
    break;
  case condition::IFEE:
    output << "\t\tifeq";
    break;
  case condition::IFNE:
    output << "\t\tifne";
    break;
  }
  int l1 = labelManager.getLable();
  int l2 = labelManager.getLable();
  output << " L" << l1 << endl;
  output << "\t\ticonst_0" << endl;
  output << "\t\tgoto L" << l2 << endl;
  output << "L" << l1 << ":" << endl;
  output << "\t\ticonst_1" << endl;
  output << "L" << l2 << ":" << endl;
}

void G_method_Start(Symbol info)
{
  output << "\tmethod public static ";
  output << ((info.S_type == type::NONE) ? "void" : "int");
  output << " " + info.id + "(";
  for (int i = 0; i < info.param_num; i++)
  {
    if (i != 0)
      output << ", ";
    output << "int";
  }
  output << ")"
     << "\n";
  output << "\tmax_stack 15"
     << "\n";
  output << "\tmax_locals 15"
     << "\n"
     << "\t{"
     << "\n";
}

void G_void_method_End()
{
  output << "\t\treturn"
     << "\n"
     << "\t}"
     << "\n";
}

void G_If(string mode)
{
  if (mode == "if_start")
  { // if start
    labelManager.pushNLable(2);
    output << "\t\tifeq L" << labelManager.takeLabel(0) << endl;
  }
  else if (mode == "else")
  { // else
    output << "\t\tgoto L" << labelManager.takeLabel(1) << endl;
    output << "L" << labelManager.takeLabel(0) << ":" << endl;
  }
  else if (mode == "if_end")
  { // if end
    output << "L" << labelManager.takeLabel(0) << ":" << endl;
    labelManager.popLabel();
  }
  else if (mode == "if_else_end")
  { // if else end
    output << "L" << labelManager.takeLabel(1) << ":" << endl;
    labelManager.popLabel();
  }
}


void G_call_Func(Symbol info)
{
  output << "\t\tinvokestatic ";
  output << ((info.S_type == type::NONE) ? "void" : "int");
  output << " " + className + "." + info.id + "(";
  for (int i = 0; i < info.param_num; ++i)
  {
    if (i != 0)
      output << ", ";
    output << "int";
  }
  output << ")"
     << "\n";
}

void G_set_global_Var(string id)
{
  output << "\t\tputstatic int " << className << "." << id << "\n";
}

void G_set_local_Var(int index)
{
  output << "\t\tistore " << index << "\n";
}


void G_Loop(string mode)
{
  if (mode == "loop_start")
  {
    labelManager.pushNLable(4);
    output << "L" << labelManager.takeLabel(0) << ":" << endl;
  }
  else if (mode == "loop_con")
  {
    labelManager.NLabel(1);
    output << "\t\tifne L" << labelManager.takeLabel(3 + labelManager.getFlag()) << endl;
  }
  else if (mode == "loop_end")
  {
    output << "\t\tgoto L" << labelManager.takeLabel(labelManager.getFlag()) << endl;
    output << "L" << labelManager.takeLabel(3 + labelManager.getFlag()) << ":" << endl;
    labelManager.popLabel();
  }
}

void G_For(int index, int value)
{
  G_get_local_Var(index);
  output << "\t\tsipush " << value << "\n";
}

void G_For(string id, int value)
{
  G_get_global_Var(id);
  output << "\t\tsipush " << value << "\n";
}

void G_For_Body(string id)
{
  G_get_global_Var(id);
  G_const_Int(1);
  G_Operator('+');
  G_set_global_Var(id);
}