#include "hangman_functions.cpp"
using namespace std;
int main()
{
  inicio();
    string palabra;
    string respuesta;
  if (mostrar_opciones()==2){
    palabra = escoger_palabra_aleatoria();
  }
  else{
    std::cout << "Escriba su palabra: ";
    std::cin >> palabra;
  }
  
  for(int i = 0; i<palabra.length(); i++)
    {
      respuesta.push_back('_');
    }
  int errores = 0;
  vector<char> incorrecto;
  bool intento = false;
  char letra;


  while(respuesta!=palabra && errores < 7)
  {
    mostrar_errores(errores);
    mostrar_estado(incorrecto, respuesta);

    cout<<"\n\nIngresa una nueva letra: ";
    cin>>letra;

    for(int i = 0; i<palabra.length(); i++)
    {
      if(letra==palabra[i])
      {
        respuesta[i] = letra;
        intento = true;
      }
    }
    if(intento)
    {
      cout<<"\nCorrect!\n";
    }
    else
    {
      cout<<"\nIncorrecto! Oh no!, se dibujo otra parte de la persona!.\n";
      incorrecto.push_back(letra);
      errores++;
    }
    intento = false;
  }

  end_game(respuesta, palabra);
  return 0;
}
