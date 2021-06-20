#include <iostream>
#include "tCircuito.cpp"

using namespace std;

int main() {
 
  tCircuito circuito;
  cout << "Digite a tensão fonte: " << endl;
  cin >> circuito.V;
  cout << "Digite a resistência R1: " << endl; 
  cin >> circuito.R1;
  cout << "Digite a resistência R2: " << endl;
  cin >> circuito.R2;

  float is = circuito.CalISerie();
  float ip = circuito.CalIPara();
  float ps = circuito.PotSerie();
  float pp = circuito.PotPara();


  cout << "Resultado Corrente I circuito" << endl;
  cout << "Série: " << is << " A" << endl;
  cout << "Paralelo: " << ip << " A" << endl;

  cout << "Resultado Potência P circuito" << endl;
  cout << "Série: " << ps << " Watts" << endl;
  cout << "Paralelo: " << pp << " Watts" << endl;

}