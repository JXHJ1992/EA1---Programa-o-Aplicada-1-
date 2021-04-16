#include <iostream>
#include <string>

using namespace std;

int main() {
  
  string P;
  int entrar;
  cout <<" digite 1 para entrar no programa" << endl ;
  cin >> entrar;

  while( entrar == 1){
  cout << " Digite uma palavra de no maximo 50 letras minusculas" << endl;
  cin >> P;

  if (P.length() > 49){
    cout << " Sua palavra será limitada em 50 letras." << endl;
    P.erase(49);
  }
  cout << "A palavra digitada é : " << P << endl;

  for (int i =0; i < P.length(); i++){

    if(P[i] == 'a'){
      cout << "#2=1"<< endl;
    }else if (P[i] == 'b'){
      cout<<"#2=2"<< endl;
    }else if (P[i] == 'c'){
      cout<<"#2=3"<< endl;
    }

    if(P[i] == 'a' ){
      cout << "#2=1"<< endl;
    }else if (P[i] == 'b'){
      cout<<"#2=2"<< endl;
    }else if (P[i] == 'c'){
      cout<<"#2=3"<< endl;
    }

    if(P[i] == 'd'){
      cout << "#3=1"<< endl;
    }else if (P[i] == 'e'){
      cout<<"#3=2"<< endl;
    }else if (P[i] == 'f'){
      cout<<"#3=3"<< endl;
    }

    if(P[i] == 'g'){
      cout << "#4=1"<< endl;
    }else if (P[i] == 'h'){
      cout<<"#4=2"<< endl;
    }else if (P[i] == 'i'){
      cout<<"#4=3"<< endl;
    }

    if(P[i] == 'j'){
      cout << "#5=1"<< endl;
    }else if (P[i] == 'k'){
      cout<<"#5=2"<< endl;
    }else if (P[i] == 'l'){
      cout<<"#5=3"<< endl;
    }

    if(P[i] == 'm'){
      cout << "#6=1"<< endl;
    }else if (P[i] == 'n'){
      cout<<"#6=2"<< endl;
    }else if (P[i] == 'o'){
      cout<<"#6=3"<< endl;
    }

    if(P[i] == 'p'){
      cout << "#7=1"<< endl;
    }else if (P[i] == 'q'){
      cout<<"#7=2"<< endl;
    }else if (P[i] == 'r'){
      cout<<"#7=3"<< endl;
    }else if (P[i] == 's'){
      cout << "#7=4" << endl;
    }

    if(P[i] == 't'){
      cout << "#8=1"<< endl;
    }else if (P[i] == 'u'){
      cout<<"#8=2"<< endl;
    }else if (P[i] == 'v'){
      cout<<"#8=3"<< endl;
    }

    if(P[i] == 'w'){
      cout << "#9=1"<< endl;
    }else if (P[i] == 'x'){
      cout<<"#9=2"<< endl;
    }else if (P[i] == 'y'){
      cout<<"#9=3"<< endl;
    }else if( P[i] == 'z'){
      cout << "#9=4" << endl;
    }


  }
   
   cout << " Se deseja digitar outra palavra Digite 1 , para sair digite qualquer outro numero" << endl;
   cin >> entrar;
  }


}