#ifndef ALGORITMOSTDS_H
#define ALGORITMOSTDS_H
#include <QString>

class AlgoritmosTDS
{
public:

    void Warshall();
    void Floyd();
    int Vertices[10];
    int Certran[5][5];
    int Caminos[5][5];
    int origen=0, pivote=0, destino=0;
    int cantVert;
    int Matrix[5][5];
    int INF=9999;
    int Conexo();
    int Completo();
    void AgregarVertice(QString ID, int coordX, int coordY, int IdVert);
    void AgregarArista(int origen, int destino);


    AlgoritmosTDS();
};

#endif // ALGORITMOSTDS_H
