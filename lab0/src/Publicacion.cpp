#include "../include/Publicacion.h"

Publicacion::Publicacion(const std::string &m_DOI, const const std::string &m_Titulo, DTFecha m_fecha)
    : m_DOI(m_DOI), m_Titulo(m_Titulo), m_Fecha(m_fecha) {}
Publicacion::~Publicacion() {
}


void Publicacion::AgregarInvestigador(Investigador* investigador) {
    m_Investigadores.push_back(investigador);
}

DTRefer Publicacion::getDT() {
    std::set<std::string> autores;
    for(Investigador* i : m_Investigadores) {
        autores.insert(i->getNombre());
    }
    return DTRefer(m_DOI, m_Titulo, m_Fecha, autores);
}
