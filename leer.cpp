#include <fstream>  // Para ifstream
#include <iostream> // Para cout
#include <vector>
using namespace std;

void muestra_vector(const vector<int> &);
int main()
{
  ifstream fich("ejemplo.dat");
  if (!fich.is_open())
  {
    cout << "Error al abrir ejemplo.dat\n";
    exit(EXIT_FAILURE);
  }

  int valor;
  vector<int> datos;
  while (fich >> valor)
    datos.push_back(valor);
  muestra_vector(datos);
}

void muestra_vector(const vector<int> &v)
{
  for (auto x : v)
    cout << x << " ";
  cout << endl;
}
