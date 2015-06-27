#include <iostream>

using namespace std;

// define a type the same as int
typedef int INT;
// define a type the same as a pointer point to int
typedef int *PINT;
// define a type of function, function declared with this type returns a result of type int, and needs two int parameters
typedef int (*p2int)(int operand_1, int operand_2);  

int intAdd(int operand_1, int operand_2){
  return operand_1 + operand_2;
}

int intMul(int operand_1, int operand_2){
  return operand_1 * operand_2;
}

// array of function pointer
void Function_pointer_array(int operand_1, int operand_2){
  p2int funcs[2];

  funcs[0] = &intAdd;
  funcs[1] = &intMul;
  
  cout << funcs[0](operand_1, operand_2) << endl;
  cout << funcs[1](operand_1, operand_2) << endl;
}

int main(){
  INT i = 3;
  PINT p = &i;
  *p = 5;
  Function_pointer_array(i, *p);
  return 0;
}


