#ifndef ARTICULO_H
#define ARTICULO_H

#include "Utils.h"
#include "Publicacion.h"

class Articulo : public Publicacion
{
public:
	virtual bool contienePalabra(std::string palabra) override;
private:
	std::string m_Revista;
	std::string m_Extracto;
};

#endif