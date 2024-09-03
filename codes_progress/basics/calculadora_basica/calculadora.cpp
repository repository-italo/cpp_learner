#include <iostream>
using namespace std;

int main()
{
   int num1, num2, resultado;
   char op;
   cout << "Escreva a operação: " << endl;
   cin >> num1;
   cin >> op;
   cin >> num2;

   switch (op)
   {
   case '+':
      resultado = num1 + num2;
      break;
   case '-':
      resultado = num1 - num2;
      break;
   case '*':
      resultado = num1 * num2;
      break;
   case '/':
      resultado = num1 / num2;
      break;
   default:
      cout << "Operacao Invalida" << endl;
   }
   cout << "Resultado: " << resultado << endl;

   return 0;
}