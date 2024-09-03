#include <iostream>
using namespace std;

int main()
{
   string meuNome = "Italo";
   cout << "Hello World " << meuNome << "!" << endl;
   cout << meuNome.length() << endl;
   cout << meuNome[1] << endl;
   cout << meuNome.find("alo", 0) << endl;
   cout << meuNome.substr(2, 3) << endl;
   return 0;
}