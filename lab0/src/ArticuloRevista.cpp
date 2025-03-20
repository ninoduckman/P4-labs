#include "../include/ArticuloRevista.h"

ArticuloRevista::ArticuloRevista() : m_Revista(""), m_Extracto("")
{
}

ArticuloRevista::ArticuloRevista(const std::string &m_Revista,
                                 const std::string &m_Extracto)
    : m_Revista(m_Revista), m_Extracto(m_Extracto)
{
}

ArticuloRevista::~ArticuloRevista()
{
}

bool ArticuloRevista::contienePalabra(const std::string &palabra)
{
	return m_Extracto.find(palabra) != std::string::npos;
}

std::string ArticuloRevista::getRevista() const
{
	return m_Revista;
}

std::string ArticuloRevista::getExtracto() const
{
	return m_Extracto;
}

void ArticuloRevista::setRevista(const std::string &revista)
{
	m_Revista = revista;
}

void ArticuloRevista::setExtracto(const std::string &extracto)
{
	m_Extracto = extracto;
}