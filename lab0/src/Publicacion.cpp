#include "../include/Publicacion.h"

Publicacion::Publicacion() : m_DOI(""), m_Titulo(""), m_Fecha(0, 0, 0)
{
}

Publicacion::Publicacion(const std::string &doi, const std::string &titulo,
                         const DTFecha &fecha)
    : m_DOI(doi), m_Titulo(titulo), m_Fecha(fecha)
{
}

Publicacion::~Publicacion()
{
}

void Publicacion::AgregarInvestigador(Investigador *investigador)
{
	m_Investigadores.push_back(investigador);
}

DTRefer Publicacion::getDT()
{
	std::set<std::string> autores;
	std::vector<Investigador*>::iterator it = m_Investigadores.begin();
	for (; it != m_Investigadores.end(); it++)
	{
		autores.insert((*it)->getNombre());
	}
	return DTRefer(m_DOI, m_Titulo, m_Fecha, autores);
}

std::string Publicacion::getDOI() const
{
	return m_DOI;
}