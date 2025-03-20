#ifndef LIBRO_H
#define LIBRO_H

#include "Utils.h"
#include "Publicacion.h"

class Libro : public Publicacion
{
public:
	virtual bool contienePalabra(std::string palabra) override;

private:
	std::string m_Editorial;
	std::set<std::string> m_PalabrasDestacadas;

};

#endif