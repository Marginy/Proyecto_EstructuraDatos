#include "algoritmostds.h"
#include <QString>
#include <QDebug>

AlgoritmosTDS::AlgoritmosTDS()
{
}

void AlgoritmosTDS::Warshall(){
    for(int origen=0; origen<cantVert; origen++){
        for(int pivote=0; pivote<cantVert; pivote++){
                if(Matrix[origen][pivote]!=INF){
                    Certran[origen][pivote]=1;

        }
    }

        for(int origen=0; origen<cantVert; origen++){
            for(int pivote =0; pivote<cantVert; pivote++){
                for(int destino=0; destino<cantVert; destino++){
                    Certran[origen][pivote] != Certran[pivote][destino] && Certran[origen][destino];
                }
            }
        }

    }
}

void AlgoritmosTDS::Floyd(){
    for(int pivote=0; pivote<cantVert; pivote++){
        for(int origen=0; origen<cantVert; origen++){
            for(int destino=0; destino<cantVert; destino++){

                int OrigenPivote = Caminos[origen][pivote];
                int DestinPivote = Caminos[destino][pivote];

                if(OrigenPivote + DestinPivote < Caminos[origen][destino]){
                    int camino = OrigenPivote + DestinPivote;

                    Caminos[origen][destino] = camino;

                }
            }
        }
    }
}


int AlgoritmosTDS::Conexo(){

    Warshall();
    qDebug()<<"ya me llamaron";
    for(int i=0; i<cantVert; i++){
        for(int j=0; j<cantVert; j++){
            if(Certran[i][j]== 0)
                return -1;
        }
    }
    return 1;
}

int AlgoritmosTDS::Completo(){

    for(int i = 0; i<cantVert ; i++)
        for(int j = 0 ; j<cantVert; j++)
            if(j != i && Matrix[i][j] == 0)
                return -1;
    return 1;
}



