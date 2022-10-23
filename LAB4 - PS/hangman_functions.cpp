#include <iostream>
#include <vector>
using namespace std;
//define functions

void inicio()
{
  std::cout << "======================\n";
  std::cout << "Juego del ahorcado X.X\n";
  std::cout << "======================\n";
}
int mostrar_opciones()
{
  int opcion;
  std::cout << "1. Ingresar palabra\n";
  std::cout << "2. Escoger palabra aleatoria\n";
  std::cout << "Ingrese una opcion: ";
  std::cin >> opcion;
  return opcion;
}
string escoger_palabra_aleatoria()
{
std::vector<std::string> palabras{"abadesa","abeja","accidente","alamo","almena","alumno","andamio","animal","arbol","bacteria","bestia","caballo","cafeto","cancion","carga","casa","constelacion","chiquillo","ciudadano","clerigo","collar","cuaderno","delegado","diente","espectador","estrella","estudiante","flor","fusil","gallina","gato","habitante","hincha","hoja","hormiga","instrumento","letra","libro","lobo","maiz","montaña","muchacho","mueble","musico","navio","novillo","pajaro","palabra","pariente","pelo","perla","perro","persona","pez","piedra","pino","planta","platano","plato","pluma","pollo","potro","problema","profesor","rama","rancho","regla","rosa","siembra","soldado","subdito","tablon","tecla","termino","vaca","vecino","vela","vid","yegua","abecedario","agrupacion","alameda","almenaje","alumnado","andamiaje","arboleda","arenal","armamento","audiencia","banco","banda","bandada","bestiaje","bibliografia","cafetal","cancionero","cardume","cargamento","caserio","chiquilleria","ciudadania","clan","clero","clientela","coleccion","colectividad","comitiva","contingente","coral","cuadrilla","delegacion","dentadura","documentacion","enjambre","escuadron","estudiantado","familia","flota","follaje","fusileria","gaterio","gente","haren","hinchada","hormiguero","humanidad","jauria","lexico","lista","manada","mobiliario","monton","muchachada","muestrario","mujerio","novillada","orquesta","pedregal","pelamen","peonaje","perleria","piara","pinar","plantacion","platanal","plumaje","pollada","potrada","praderia","problematica","profesorado","publico","racimo","ramaje","rancheria","rebaño","reglamento","reparto","reunion","rosal","rosaleda","sembradio","sequito","tablonaje","teclado","tribu","trio","tropa","utileria","vacaje","vajilla","vajillo","vecindario","velamen","viña","viñedo","vocabulario","yeguada","yegueria","accidente","agujero","almohada","año","barco","batalla","caja","cancion","casa","cinta","coche","contratiempo","cuaderno","cuento","dedo","detalle","empresa","encomienda","excursion","fantasma","fotografia","garza","habitacion","herida","hora","imagen","incidente","lado","lago","maquina","meme","mesa","minuto","montaña","niña","nido","queque","pais","paquete","planeta","poema","raton","regalo","reunion","rio","sustantivo","susto","unicornio","uña","viaje","aceite","acido","agua","aire","alegria","amor","antipatia","arena","barro","belleza","calor","colera","cooperacion","desagrado","embriaguez","entusiasmo","esfuerzo","eter","fastidio","fuego","gas","hambre","harina","inquina","ira","lava","leche","lluvia","lujuria","luz","maldad","miedo","modestia","monoxido","necedad","nostalgia","odio","oxigeno","paciencia","pereza","rabia","saliva","sangre","savia","sed","simpatia","testarudez","tiempo","tinta","tristeza","apice","batiburrillo","brizna","centenar","copa","cuartel","fajo","gajo","gota","grado","gramo","grano","hatajo","haz","hora","kilo","lamina","lasca","litro","loncha","lonja","mendrugo","metro","milimetro","millar","minutos","mitad","par","pareja","pedazo","pellizco","pizca","porcion","puñado","ramo","rebanada","ristra","rodaja","serie","sucesion","tajada","taza","terron","tramo","trozo","yunta"
 };
  srand(time(NULL));
  int random_index = rand() % palabras.size();
  string random_word = palabras[random_index];
  return random_word;
}

void mostrar_errores(int errores)
{
  if(errores==0)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(errores==1)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(errores==2)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<"  |   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(errores==3)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|   | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(errores==4)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<"      | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(errores==5)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" /    | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }
  else if(errores==6)
  {
    cout<<"  +---+ \n";
    cout<<"  |   | \n";
    cout<<"  O   | \n";
    cout<<" /|\\  | \n";
    cout<<" / \\  | \n";
    cout<<"      | \n";
    cout<<" ========= \n";
  }

}


void mostrar_estado(vector<char> incorrecto, string respuesta)
{
  cout<<"Letras fallidas: \n";

  for(int i = 0; i<incorrecto.size(); i++)
  {
    cout<<incorrecto[i]<<" ";
  }

  cout<<"\nPalabra:\n";

  for(int i = 0; i<respuesta.length(); i++)
  {
    cout<<respuesta[i]<<" ";
  }
}


void end_game(string respuesta, string palabra)
{
  if(respuesta==palabra)
  {
    cout<<"Muy bien! Adivinaste la palabra: \""<<palabra<<"\" y salvaste al hombrecillo.\n";
    cout<<"Felicidades!\n";
  }
  else
  {
    cout<<"Oh no, perdiste y el hombrecillo fue ahorcado!\n";
    cout<<"P.S. La palabra era: "<<palabra<<"\n";
  }
}
