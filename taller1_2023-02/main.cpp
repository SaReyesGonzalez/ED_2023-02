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

    // Creacion hashmaps
    unordered_map<int,unordered_map<int,Software*>> hashmap;
    unordered_map<int,Software*> mapaJuegos;
    unordered_map<int,Software*> mapaOfimatica;
    unordered_map<int,Software*> mapaProduccion;
    unordered_map<int,Software*> mapaNavegador;
    unordered_map<int,Software*> mapaSeguridad;
    unordered_map<int,Software*> mapaSocial;

    // Añadir juegos a su hashmap
    mapaJuegos[0] = game1;
    mapaJuegos[1] = game2;
    mapaJuegos[2] = game3;
    mapaJuegos[3] = game4;
    mapaJuegos[4] = game5;
    mapaJuegos[5] = game6;
    mapaJuegos[6] = game7;
    mapaJuegos[7] = game8;
    mapaJuegos[8] = game9;
    mapaJuegos[9] = game10;
    mapaJuegos[10] = game11;
    mapaJuegos[11] = game12;
    mapaJuegos[12] = game13;
    mapaJuegos[13] = game14;
    mapaJuegos[14] = game15;
    mapaJuegos[15] = game16;
    mapaJuegos[16] = game17;
    mapaJuegos[17] = game18;
    mapaJuegos[18] = game19;
    mapaJuegos[19] = game20;

    // Añadir ofimatica a su hashmap
    mapaOfimatica[0] = ofi1;
    mapaOfimatica[1] = ofi2;
    mapaOfimatica[2] = ofi3;
    mapaOfimatica[3] = ofi4;
    mapaOfimatica[4] = ofi5;

    // Añadir produccion a su hashmap
    mapaProduccion[0] = prod1;
    mapaProduccion[1] = prod2;
    mapaProduccion[2] = prod3;
    mapaProduccion[3] = prod4;

    // Añadir navegadores a su hashmap
    mapaNavegador[0] = nav1;
    mapaNavegador[1] = nav2;

    // Añadir seguridad a su hashmap
    mapaSeguridad[0] = seg1;
    mapaSeguridad[2] = seg2;
    mapaSeguridad[3] = seg3;
    mapaSeguridad[4] = seg4;
    mapaSeguridad[5] = seg5;
    mapaSeguridad[6] = seg6;

    // Añadir sociales a su hashmap
    mapaSocial[0] = social1;
    mapaSocial[1] = social2;

    // Añadir todos los hashmaps de los distintos tipos de software a un hashmap general
    hashmap[0] = mapaJuegos;
    hashmap[1] = mapaOfimatica;
    hashmap[2] = mapaProduccion;
    hashmap[3] = mapaNavegador;
    hashmap[4] = mapaSeguridad;
    hashmap[5] = mapaSocial;


    //##################################################################################################################




}
