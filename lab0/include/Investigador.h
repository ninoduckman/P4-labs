#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include "DTFecha.h"
#include "Utils.h"

class Publicacion;

class Investigador
{
  public:
	Investigador(const std::string &m_ORCID, const std::string &m_Nombre,
	             const std::string &m_Institucion);
	~Investigador();
	std::string toString();
	std::set<std::string> listarPublicaciones(const DTFecha &desde,
	                                          std::string palabra);

	std::string getNombre() const;
	std::string getORCID() const;
	std::string getInstitucion() const;

  private:
	std::string m_ORCID;
	std::string m_Nombre;
	std::string m_Institucion;
	std::vector<Publicacion *> m_Publicaciones;
};

#endif