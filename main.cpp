#include <iostream>
#include <string>

using namespace std;

int main() {
  
  string P;

  cout << " Digite uma palavra de no maximo 50 letras" << endl;
  cin >> P;

  if (P.length() > 49){
    cout << " Sua palavra será limitada em 50 letras." << endl;
    P.erase(49);
  }
  cout << "A palavra digitada é : " << P << endl;
}