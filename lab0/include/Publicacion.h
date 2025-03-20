#ifndef PUBLICACION_H
#define PUBLICACION_H

#include "Utils.h"
#include "DTFecha.h"

class DTRefer;
class DTFecha;
class Investigador;

class Publicacion
{
public:
	DTRefer getDT();
	virtual bool contienePalabra(std::string palabra) = 0;

private:
	std::string m_DOI;
	std::string m_Titulo;
	DTFecha m_Fecha;
	std::vector<Investigador*> m_Investigadores;

};

#endif