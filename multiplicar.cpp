#include <iostream>
using namespace std;

//Funcion de multiplicar 

int multiplicar(int x,int y)
{
  int z; 
  z = x*y; 

          
  return z;
}

// Funcion al cuadrado que recibe a y retorna a al cuadrado 

int Alcuadrado(int x)
{
          
  return x*x;
}

// La funcion main donde llamo las otras dos funciones que se crearon anteriormente 
 
int main()
{
  int a;
  int b;

  a = 23;
  b = 4;
 
  int mult = multiplicar(a,b);
  
  cout << "La multiplicacion es: " << mult<< " y la La variable a al cuadrado es:" << Alcuadrado << endl;   
          
  return 0;
}


