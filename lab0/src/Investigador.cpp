#include "../include/Investigador.h"

Investigador::Investigador(const std::string &m_ORCID, const std::string &m_Nombre, const std::string &m_Institucion)
    : m_ORCID(m_ORCID), m_Nombre(m_Nombre), m_Institucion(m_Institucion) {}
Investigador::~Investigador() {
}