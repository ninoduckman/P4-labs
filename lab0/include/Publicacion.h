#ifndef PUBLICACION_H
#define PUBLICACION_H

#include "../include/DTRefer.h"
#include "../include/Investigador.h"
#include "DTFecha.h"
#include "Utils.h"

class DTRefer;
class DTFecha;
class Investigador;

class Publicacion
{
  public:
	Publicacion();
	Publicacion(const std::string &m_DOI, const std::string &m_Titulo,
	            DTFecha m_fecha);
	~Publicacion();
	DTRefer getDT();
	void AgregarInvestigador(Investigador *investigador);
	virtual bool contienePalabra(const std::string &palabra) = 0;

  private:
	std::string m_DOI;
	std::string m_Titulo;
	DTFecha m_Fecha;
	std::vector<Investigador *> m_Investigadores;
};

#endif