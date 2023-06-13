#include <iostream>

class persona {
public:
  int edad;
  std::string comida;
};

void Paco() {
  persona paco;

  paco.edad = 30;
  paco.comida = "Fresas";

  std::cout << "Su comida favorita es: " << paco.comida<< "\n";
  std::cout<< "Su edad es: "<< paco.edad <<"\n";
}

void Maria(){
  persona maria;

  maria.edad = 60;
  maria.comida = "Lasaña";

  std::cout<<"Su comida favorita es: "<<maria.comida<<"\n";
  std::cout<< "Su edad es: "<<maria.edad<<"\n";
}

int main() {
  std::string input;

  std::cout << "Pon un nombre:\n";
  std::cin >> input;

  if (input == "Paco") {
      Paco();
  }else if(input == "Maria"){
    Maria();
  }
}
