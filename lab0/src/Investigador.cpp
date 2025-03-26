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

std::string Investigador::getNombre() const
{
	return m_Nombre;
}

std::string Investigador::getORCID() const
{
	return m_ORCID;
}

std::string Investigador::getInstitucion() const
{
	return m_Institucion;
}