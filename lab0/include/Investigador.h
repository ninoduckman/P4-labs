#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include "Utils.h"
#include "DTFecha.h"

class Publicacion;

class Investigador
{
public:
	Investigador(const std::string &m_ORCID, const std::string &m_Nombre, const std::string &m_Institucion);
	std::string toString();
	std::set<std::string> listarPublicaciones(DTFecha desde, std::string palabra);
	std::string getNombre();

private:
	std::string m_ORCID;
	std::string m_Nombre;
	std::string m_Institucion;
	std::vector<Publicacion*> m_Publicaciones;

};

#endif