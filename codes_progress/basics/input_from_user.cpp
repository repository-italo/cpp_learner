#include <iostream>
using namespace std;

int main()
{
   int age;
   string name;
   cout << "Enter your name: ";
   // cin >> age;
   // cout << "youre " << age << " years old";
   //  Para strings
   getline(cin, name);
   cout << "hello " << name << endl;
   return 0;
}