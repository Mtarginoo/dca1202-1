#include <iostream>
#include <cmath>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1, v2, v3;
  Vetor v4(4,5);
  // criacao com copia
  Vetor v5=v4, v6(v4);

  v3 = v4+v6;
//  v3=v4.operator+(v6);
  cout << "v3 = ";
  v3.print();
  cout << endl;

  v3 = v4-v6;
  cout << "v3 = ";
  v3.print();
  cout << endl;

  v3 = v4*4 - v6*5;
  v3 = v4++;
  cout << "v3 = ";
  v3.print();
  cout << endl;
/*
  v3 = ++v4;
  cout << "v3 = ";
  v3.print();
  cout << endl;

  v3 = 4*v4;
  cout << "v3 = ";
  v3.print();
  cout << endl;

  cout << "v1.x= " << v1.getX() << endl;
  cout << "v1.y= " << v1.getY() << endl;


  v1.setX(3);
  v1.setY(4);
  cout << "v1.x= " << v1.getX() << endl;
  cout << "v1.y= " << v1.getY() << endl;
  cout << "tamanho = " << v1.tamanho() << endl;
  cout << "angulo = " << v1.angulo() << endl;
  v2 = v1.unitario();
  cout << "unitario = " << v2.getX() <<
          ", " << v2.getY() << endl;
  v2.print();
  cout << endl;

  cout << "v2 = ";
  v1.print();
  cout << " + ";
  v2.print();
  cout << endl;
  v2.setX(5);
  v2.setY(11);
  //cout << "escalar = " << escalar(v1,v2) << endl;
  cout << "escalar = " << v1.escalar(v2) << endl;
  v3 = v1.soma(v2);
  v3.print();
  cout << v3.getX() << endl;
  cout << v3.getY() << endl;
  v1.soma(v2).print();
  */
  return 0;
}
