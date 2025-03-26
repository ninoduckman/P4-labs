#include "../include/Investigador.h"

Investigador::Investigador(const std::string &m_ORCID,
                           const std::string &m_Nombre,
                           const std::string &m_Institucion)
    : m_ORCID(m_ORCID), m_Nombre(m_Nombre), m_Institucion(m_Institucion)
{
}

Investigador::~Investigador()
{
}

std::string Investigador::getNombre()
{
	return m_Nombre;
}

std::string Investigador::toString()
{
    return m_ORCID + "->" + m_Nombre + "/" + m_Institucion;
}

std::set<std::string> Investigador::listarPublicaciones(DTFecha &desde, std::string palabra) {
    std::set<std::string> publicaciones;
    for(Publicacion* p : m_Publicaciones) {
        DTRefer refer = p->getDT();
        if(refer.getFecha() < desde) continue;
        if(p->contienePalabra(palabra)) 
            publicaciones.insert(refer.getTitulo());
    }
    return publicaciones;
}