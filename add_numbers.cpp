#include <iostream>
using namespace std;

int main()
{
   int first_number, second_number, soma;
   cout << "Escreva dois numeros: ";
   cin >> first_number >> second_number;
   soma = first_number + second_number;
   cout << first_number << "+" << second_number << "=" << soma;
   return 0;
}