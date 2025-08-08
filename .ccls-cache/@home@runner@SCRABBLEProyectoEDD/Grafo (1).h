#ifndef __GRAFO__H__
#define __GRAFO__H__

#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <set>            // Include for std::set
#include <limits>         // Include for std::numeric_limits

template <class T, class C>
class Grafo {
public:
    typedef std::vector<T> TVert;
    typedef std::map<unsigned long, C> TRow;
    typedef std::map<unsigned long, TRow> TMatr;
    typedef std::vector<bool> TMark;

    std::map<int, T> vertices;
    std::map<int, std::map<int, C>> aristas;

    Grafo();
    ~Grafo();
    unsigned long InsertarVertice(T v);
    void InsertarArista(T v1, T v2, C costo);
    unsigned long ObtenerNumVertices();
    unsigned long ObtenerNumAristas();
    T ObtenerVertice(unsigned long i);
    C ObtenerCostoArista(unsigned long i, unsigned long j);
    bool BuscarVertice(T v);
    bool BuscarArista(unsigned long i, unsigned long j);
    bool EliminarVertice(T v);
    bool EliminarArista(unsigned long i, unsigned long j);
    void Plano();
    void PreOrdenDFS(unsigned long startVertex);
    void dfsHelper(unsigned long vertex, std::vector<bool> &visited);
    void PreOrdenDFSPila(unsigned long inicio);
    void NivelesBFS(unsigned long startVertex);
    std::map<int, int> algoritmoPrim(int porteria);
    std::map<int, C> algoritmoDijkstra(int porteria);
    std::vector<std::vector<long unsigned int>> Prim(int porteria);
    std::vector<std::vector<long unsigned int>> Dijkstra(int porteria);
    int NumeroVertices();
    C ObtenerCosto(unsigned long idOrigen, unsigned long idDestino);
    void imprimir();

protected:
    TVert l_vertices;
    TMatr m_costos;
};

#include "Grafo.hxx"

#endif
