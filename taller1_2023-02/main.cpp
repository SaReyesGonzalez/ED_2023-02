#include <string>
#include <unordered_map>
#include "Software/Software.h"
#include "Software/JUEGOS/Juego.h"
#include "Software/OFIMATICA/Ofimatica.h"
#include "Software/PRODUCCION/Produccion.h"
#include "Software/NAVEGADOR/Navegador.h"
#include "Software/SEGURIDAD/Seguridad.h"
#include "Software/SOCIAL/Social.h"

using namespace std;

const int CANTIDAD_USUARIOS = 15;

int login(Usuario* arrayUsers[CANTIDAD_USUARIOS]);
char interfazUsuario();
void agregarSoftware(unordered_map<int,Juego*> game,unordered_map<int,Ofimatica*> ofi,unordered_map<int,Produccion*> prod,unordered_map<int,Navegador*> nav,unordered_map<int,Seguridad*> seg,unordered_map<int,Social*> soc);
void interfazBiblioteca(unordered_map<int,Juego*> game,unordered_map<int,Ofimatica*> ofi,unordered_map<int,Produccion*> prod,unordered_map<int,Navegador*> nav,unordered_map<int,Seguridad*> seg,unordered_map<int,Social*> soc);
void interfazJuegos(unordered_map<int,Juego*> games);
void interfazOfimatica(unordered_map<int,Ofimatica*> ofi);
void interfazProduccion(unordered_map<int,Produccion*> prod);
void interfazNavegador(unordered_map<int,Navegador*> nav);
void interfazSeguridad(unordered_map<int,Seguridad*> seg);
void interfazSocial(unordered_map<int,Social*> soc);


int main() {

    // Condicion 1 (15 usuarios)
    Usuario* admin = new Usuario("Admin","admin",0,"admin@admin.cl",true);
    Usuario* kid1 = new Usuario("Jose","123",6,"",false);
    Usuario* kid2 = new Usuario("Carla","123",9,"",false);
    Usuario* kid3 = new Usuario("Clara","123",13,"",false);
    Usuario* kid4 = new Usuario("Carlos","123",16,"",false);
    Usuario* user1 = new Usuario("Sebastian","123123",22,"sebastian@email.cl",false);
    Usuario* user2 = new Usuario("Antonio","123123",18,"antonio@email.cl",false);
    Usuario* user3 = new Usuario("Luciano","123123",22,"luciano@email.cl",false);
    Usuario* user4 = new Usuario("Andres","123123",25,"andres@email.cl",false);
    Usuario* user5 = new Usuario("Tatiana","123123",28,"tatiana@email.cl",false);
    Usuario* user6 = new Usuario("Daniela","123123",30,"daniela@email.cl",false);
    Usuario* user7 = new Usuario("Anton","123123",30,"anton@email.cl",false);
    Usuario* user8 = new Usuario("Lucas","123123",26,"lucas@email.cl",false);
    Usuario* user9 = new Usuario("Lola","123123",21,"lola@email.cl",false);
    Usuario* user10 = new Usuario("Mauricio","123123",19,"mauricio@email.cl",false);


    // Condicion 2 (20 juegos. 2 por cada genero, 5 +18)
    Software* game1 = new Juego("Doom Eternal","id Software","M", 0,"FPS");
    Software* game2 = new Juego("Call of Duty","Infinity Ward","M",0,"FPS");
    Software* game3 = new Juego("World of Warcraft","Blizzard","T",0,"MMO");
    Software* game4 = new Juego("Final Fantasy XIV","Square Enix","T",0,"MMO");
    Software* game5 = new Juego("Portal","Valve","T",0,"PUZZLE");
    Software* game6 = new Juego("Portal 2","Valve","E",0,"PUZZLE");
    Software* game7 = new Juego("Resident Evil Village","Capcom","M",0,"Survival horror");
    Software* game8 = new Juego("Silent Hill 2","Konami","M",0,"Survival horror");
    Software* game9 = new Juego("Super Mario Odyssey","Nintendo","E",0,"Plataformas");
    Software* game10 = new Juego("Hollow Knight","Team Cherry","E",0,"Plataformas");
    Software* game11 = new Juego("The Legend of Zelda","Nintendo","E",0,"Aventuras");
    Software* game12 = new Juego("Uncharted 4","Naughty Dog","T",0,"Aventuras");
    Software* game13 = new Juego("Mortal Kombat 11","NetherRealm Studios","M",0,"Peleas");
    Software* game14 = new Juego("Super Smash Bros","Nintendo","E",0,"Peleas");
    Software* game15 = new Juego("League of Legends","Riot Games","T",0,"MOBA");
    Software* game16 = new Juego("Smite","Hi-Rez","T",0,"MOBA");
    Software* game17 = new Juego("FIFA 22","EA Vancouver","E",0,"Deportes");
    Software* game18 = new Juego("NBA 2K22","Visual Concepts","E",0,"Deportes");
    Software* game19 = new Juego("Hearthstone","Blizzard","T",0,"Cartas");
    Software* game20 = new Juego("Legends of Runeterra","Riot Games","T",0,"Cartas");


    // Condicion 3 (5 ofimatica)
    Software* ofi1 = new Ofimatica("Excel","MicroSoft","E",0,0);
    Software* ofi2 = new Ofimatica("Word","MicroSoft","E",0,0);
    Software* ofi3 = new Ofimatica("PowerPoint","MicroSoft","E",0,0);
    Software* ofi4 = new Ofimatica("GDocs","Google","E",0,0);
    Software* ofi5 = new Ofimatica("GSLides","Google","E",0,0);


    // Condicion 4 (4 produccion, son +18)
    Software* prod1 = new Produccion("Adobe Premiere Pro","Adobe Inc","M",0,"Video");
    Software* prod2 = new Produccion("Ableton live","Ableton AG","M",0,"Musica");
    Software* prod3 = new Produccion("OBS Studio","Open Source","M",0,"Streaming");
    Software* prod4 = new Produccion("Adobe Photoshop","Adobe Inc","M",0,"Fotos");


    // Condicion 5 (2 Navegadores)
    Software* nav1 = new Navegador("Mozilla Firefox","Mozilla Corp","E",0);
    Software* nav2 = new Navegador("Opera","Opera Software AS","E",0);


    // Condicion 6 (6 seguridad, solo por admin)
    Software* seg1 = new Seguridad("CryptoLocker","Desconocido","ADMIN",0,"Ransomware");
    Software* seg2 = new Seguridad("FlexiSPY","FlexiSPY Ltd.","ADMIN",0,"Spyware");
    Software* seg3 = new Seguridad("Andromeda","Desconocido","ADMIN",0,"Botnets");
    Software* seg4 = new Seguridad("Hacking Team RCS","Hacking Team","ADMIN",0,"Rootkits");
    Software* seg5 = new Seguridad("SQL Slammer","Desconocido","ADMIN",0,"Gusanos");
    Software* seg6 = new Seguridad("DarkTequila","Desconocido","ADMIN",0,"Troyanos");


    // Condicion 7 (2 social)
    Software* social1 = new Social("Facebook","Facebook INC.","E",0);
    Software* social2 = new Social("Instagram","Facebook INC.","E",0);


    //##################################################################################################################

    // Array usuarios
    Usuario* arrayUsers[CANTIDAD_USUARIOS];
    arrayUsers[0] = admin;
    arrayUsers[1] = kid1;
    arrayUsers[2] = kid2;
    arrayUsers[3] = kid3;
    arrayUsers[4] = kid4;
    arrayUsers[5] = user1;
    arrayUsers[6] = user2;
    arrayUsers[7] = user3;
    arrayUsers[8] = user4;
    arrayUsers[9] = user5;
    arrayUsers[10] = user6;
    arrayUsers[11] = user7;
    arrayUsers[12] = user8;
    arrayUsers[13] = user9;
    arrayUsers[14] = user10;

    // Creacion hashmaps
    unordered_map<int,Juego*> mapaJuegos;
    unordered_map<int,Ofimatica*> mapaOfimatica;
    unordered_map<int,Produccion*> mapaProduccion;
    unordered_map<int,Navegador*> mapaNavegador;
    unordered_map<int,Seguridad*> mapaSeguridad;
    unordered_map<int,Social*> mapaSocial;

    // Añadir juegos a su hashmap
    mapaJuegos[0] = static_cast<Juego*>(game1);
    mapaJuegos[1] = static_cast<Juego*>(game2);
    mapaJuegos[2] = static_cast<Juego*>(game3);
    mapaJuegos[3] = static_cast<Juego*>(game4);
    mapaJuegos[4] = static_cast<Juego*>(game5);
    mapaJuegos[5] = static_cast<Juego*>(game6);
    mapaJuegos[6] = static_cast<Juego*>(game7);
    mapaJuegos[7] = static_cast<Juego*>(game8);
    mapaJuegos[8] = static_cast<Juego*>(game9);
    mapaJuegos[9] = static_cast<Juego*>(game10);
    mapaJuegos[10] = static_cast<Juego*>(game11);
    mapaJuegos[11] = static_cast<Juego*>(game12);
    mapaJuegos[12] = static_cast<Juego*>(game13);
    mapaJuegos[13] = static_cast<Juego*>(game14);
    mapaJuegos[14] = static_cast<Juego*>(game15);
    mapaJuegos[15] = static_cast<Juego*>(game16);
    mapaJuegos[16] = static_cast<Juego*>(game17);
    mapaJuegos[17] = static_cast<Juego*>(game18);
    mapaJuegos[18] = static_cast<Juego*>(game19);
    mapaJuegos[19] = static_cast<Juego*>(game20);


    // Añadir ofimatica a su hashmap
    mapaOfimatica[0] = static_cast<Ofimatica*>(ofi1);
    mapaOfimatica[1] = static_cast<Ofimatica*>(ofi2);
    mapaOfimatica[2] = static_cast<Ofimatica*>(ofi3);
    mapaOfimatica[3] = static_cast<Ofimatica*>(ofi4);
    mapaOfimatica[4] = static_cast<Ofimatica*>(ofi5);

    // Añadir produccion a su hashmap
    mapaProduccion[0] = static_cast<Produccion*>(prod1);
    mapaProduccion[1] = static_cast<Produccion*>(prod2);
    mapaProduccion[2] = static_cast<Produccion*>(prod3);
    mapaProduccion[3] = static_cast<Produccion*>(prod4);

    // Añadir navegadores a su hashmap
    mapaNavegador[0] = static_cast<Navegador*>(nav1);
    mapaNavegador[1] = static_cast<Navegador*>(nav2);

    // Añadir seguridad a su hashmap
    mapaSeguridad[0] = static_cast<Seguridad*>(seg1);
    mapaSeguridad[2] = static_cast<Seguridad*>(seg2);
    mapaSeguridad[3] = static_cast<Seguridad*>(seg3);
    mapaSeguridad[4] = static_cast<Seguridad*>(seg4);
    mapaSeguridad[5] = static_cast<Seguridad*>(seg5);
    mapaSeguridad[6] = static_cast<Seguridad*>(seg6);

// Añadir sociales a su hashmap
    mapaSocial[0] = static_cast<Social*>(social1);
    mapaSocial[1] = static_cast<Social*>(social2);

    //##################################################################################################################

    bool userFlag = true;
    char userOpt;
    char softwareOpt;

    int userIndex = login(arrayUsers);

    while (userIndex == -1)
    {
        cout << "\nError: El usuario y/o la contraseña no existen.\n" << endl;
        userIndex = login(arrayUsers);
    }

    cout << "Bienvenido " << arrayUsers[userIndex]->getNombre() << "!" << endl;

    userOpt = interfazUsuario();

    while (userFlag)
    {
        switch (userOpt)
        {
            case 'a':
                agregarSoftware(mapaJuegos,mapaOfimatica,mapaProduccion,mapaNavegador,mapaSeguridad,mapaSocial);
                break;

            case 'b':
                //eliminarSoftware();
                break;

            case 'c':
                interfazBiblioteca(mapaJuegos,mapaOfimatica,mapaProduccion,mapaNavegador,mapaSeguridad,mapaSocial);
                break;

            case 'd':
                userFlag = false;
                break;

            default:
                cout << "Seleccione una opcion valida." << endl;
                userOpt = interfazUsuario();
        }
    }

    cout << "\nFinalizando programa." << endl;
    return 0;

}


int login(Usuario* arrayUsers[CANTIDAD_USUARIOS])
{
    string usuario;
    string password;

    cout << "Ingrese su nombre: ";
    cin >> usuario;

    cout << "Ingrese su contraseña: ";
    cin >> password;

    for (int i = 0 ; i < CANTIDAD_USUARIOS ; i++)
    {
        if (arrayUsers[i]->getNombre() == usuario && arrayUsers[i]->getPassword() == password) {
            return i;
        }
    }

    return -1;
}


char interfazUsuario()
{
    char opcion;
    cout<<"\na. Agregar software "<<endl;
    cout<<"b. Eliminar software "<<endl;
    cout<<"c. Biblioteca de software"<<endl;
    cout<<"d. Salir" <<endl;
    cout<<"Seleccione una opcion: ";
    cin>>opcion;
    return opcion;
}


void agregarSoftware(unordered_map<int,Juego*> game, unordered_map<int,Ofimatica*> ofi, unordered_map<int,Produccion*> prod, unordered_map<int,Navegador*> nav, unordered_map<int,Seguridad*> seg, unordered_map<int,Social*> soc)
{
    char opt;

    string nombre;
    string dev;
    string pg;
    int precio;
    string genero;
    string tipo;
    Software* software;

    cout<<"\nSeleccione el tipo de software que desea agregar"<<endl;
    cout<<"a. Juego"<<endl;
    cout<<"b. Ofimatica"<<endl;
    cout<<"c. Produccion"<<endl;
    cout<<"d. Navegador"<<endl;
    cout<<"e. Seguridad"<<endl;
    cout<<"f. Social"<<endl;
    cin >> opt;

    switch (opt)
    {
        case 'a': // JUEGOS
            cout << "Ingrese el nombre: ";
            cin >> nombre;

            cout << "Ingrese el developer: ";
            cin >> dev;

            cout << "Ingrese el pg (E/T/M): ";
            cin >> pg;

            if (pg != "E" && pg != "T" && pg != "M")
            {
                cout << "Invalido." << endl;
                break;
            }

            cout << "Ingrese el precio: ";
            cin >> precio;

            cout <<"ingrese el genero: ";
            cin >> genero;

            software = new Juego(nombre,dev,pg,precio,genero);

            game[game.size()] = static_cast<Juego *>(software);

            break;

        case 'b': // OFIMATICA

            cout << "Ingrese el nombre: ";
            cin >> nombre;

            cout << "Ingrese el developer: ";
            cin >> dev;

            cout << "Ingrese el pg (E/T/M): ";
            cin >> pg;

            if (pg != "E" && pg != "T" && pg != "M")
            {
                cout << "Invalido." << endl;
                break;
            }

            cout << "Ingrese el precio: ";
            cin >> precio;

            software = new Ofimatica(nombre,dev,pg,precio,0);

            ofi[ofi.size()] = static_cast<Ofimatica *>(software);

            break;

        case 'c': // PRODUCCION

            cout << "Ingrese el nombre: ";
            cin >> nombre;

            cout << "Ingrese el developer: ";
            cin >> dev;

            cout << "Ingrese el pg (E/T/M): ";
            cin >> pg;

            if (pg != "E" && pg != "T" && pg != "M")
            {
                cout << "Invalido." << endl;
                break;
            }

            cout << "Ingrese el precio: ";
            cin >> precio;

            cout <<"ingrese el tipo: ";
            cin >> tipo;

            software = new Produccion(nombre,dev,pg,precio,tipo);

            prod[prod.size()] = static_cast<Produccion *>(software);

            break;

        case 'd': // NAVEGADOR
            cout << "Ingrese el nombre: ";
            cin >> nombre;

            cout << "Ingrese el developer: ";
            cin >> dev;

            cout << "Ingrese el pg (E/T/M): ";
            cin >> pg;

            if (pg != "E" && pg != "T" && pg != "M")
            {
                cout << "Invalido." << endl;
                break;
            }

            cout << "Ingrese el precio: ";
            cin >> precio;

            cout <<"ingrese el genero: ";
            cin >> genero;

            software = new Navegador(nombre,dev,pg,precio);

            nav[nav.size()] = static_cast<Navegador *>(software);

            break;

            case 'e': // SEGURIDAD
            cout << "Ingrese el nombre: ";
            cin >> nombre;

            cout << "Ingrese el developer: ";
            cin >> dev;

            cout << "Ingrese el pg (E/T/M): ";
            cin >> pg;

            if (pg != "E" && pg != "T" && pg != "M")
            {
                cout << "Invalido." << endl;
                break;
            }

            cout << "Ingrese el precio: ";
            cin >> precio;

            cout <<"ingrese el tipo: ";
            cin >> tipo;

            software = new Seguridad(nombre,dev,pg,precio,tipo);

            seg[seg.size()] = static_cast<Seguridad *>(software);
            break;

        case 'f': // SOCIAl
            cout << "Ingrese el nombre: ";
            cin >> nombre;

            cout << "Ingrese el developer: ";
            cin >> dev;

            cout << "Ingrese el pg (E/T/M): ";
            cin >> pg;

            if (pg != "E" && pg != "T" && pg != "M")
            {
                cout << "Invalido." << endl;
                break;
            }

            cout << "Ingrese el precio: ";
            cin >> precio;

            software = new Social(nombre,dev,pg,precio);

            soc[soc.size()] = static_cast<Social *>(software);
            break;

        default:
            cout << "Opcion invalida." << endl;
    }
}


void interfazBiblioteca(unordered_map<int,Juego*> game, unordered_map<int,Ofimatica*> ofi, unordered_map<int,Produccion*> prod, unordered_map<int,Navegador*> nav, unordered_map<int,Seguridad*> seg, unordered_map<int,Social*> soc)
{
    char opt;
    cout<<"\na. JUEGOS "<<endl;
    cout<<"b. OFIMATICA "<<endl;
    cout<<"c. PRODUCCION"<<endl;
    cout<<"d. NAVEGADOR"<<endl;
    cout<<"e. SEGURIDAD"<<endl;
    cout<<"f. SOCIAL"<<endl;
    cin>>opt;

    switch (opt)
    {
        case 'a': // JUEGOS
            interfazJuegos(game);

            break;

        case 'b': // OFIMATICA
            //interfazOfimatica(ofi);

            break;

        case 'c': // PRODUCCION


            break;

        case 'd': // NAVEGADOR


            break;

        case 'e': // SEGURIDAD

            break;

        case 'f': // SOCIAl

            break;

        default:
            cout << "Opcion invalida." << endl;
    }
}


bool confirmarPermiso() {}


void interfazJuegos(unordered_map<int,Juego*> games)
{
    cout << "\nMostrar todos los generos: " <<endl;

    string genero = games.at(0)->getGenero();

    for (int i = 0 ; i < games.size() ; i++)
    {
        if (games.at(i)->getGenero() == genero)
        {

        }

    }
}



