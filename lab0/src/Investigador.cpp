#include "../include/Investigador.h"
#include "../include/DTRefer.h"
#include "../include/Publicacion.h"

Investigador::Investigador(const std::string &m_ORCID,
                           const std::string &m_Nombre,
                           const std::string &m_Institucion)
    : m_ORCID(m_ORCID), m_Nombre(m_Nombre), m_Institucion(m_Institucion)
{
}

Investigador::~Investigador()
{
}

std::string Investigador::getNombre() const
{
	return m_Nombre;
}

std::string Investigador::toString()
{
    return m_ORCID + "->" + m_Nombre + "/" + m_Institucion;
}

std::set<std::string> Investigador::listarPublicaciones(DTFecha &desde, std::string palabra) {
    std::set<std::string> publicaciones;
    std::vector<Publicacion*>::iterator it = m_Publicaciones.begin();
    for(; it != m_Publicaciones.end(); it++) 
    {
        DTRefer refer = (*it)->getDT();
        if(refer.getFecha() < desde) continue;
        if((*it)->contienePalabra(palabra)) 
            publicaciones.insert(refer.getTitulo());
    }
    return publicaciones;
}

void Investigador::AgregarPublicacion(Publicacion *publicacion) {
	m_Publicaciones.push_back(publicacion);
}

std::string Investigador::getORCID() const
{
	return m_ORCID;
}

std::string Investigador::getInstitucion() const
{
	return m_Institucion;
}