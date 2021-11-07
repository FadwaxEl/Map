// UserMaps.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "GeoPoint.h"
#include "SemantiquePoint.h"
using namespace std;
using namespace Map;
using namespace Point;


int main()
{
    cout << "================= MAP===========!\n";
    GeoPoint P(5.6, 6.2, 8888);
    GeoPoint* P1 = new GeoPoint(0.0, 0.0, 0000);
    GeoPoint* P2 = new GeoPoint(1.0, 1.0, 123546);
    P1 = P2;
    P1->print();
    SemantiquePoint* G = new SemantiquePoint(1.2, 1.2, 4000, "Gare de train");
    P.print();
    G->print();
    P1 = G;

   // P = G;???
}
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
