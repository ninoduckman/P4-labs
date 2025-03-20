#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include "Utils.h"
#include "Publicacion.h"

class PaginaWeb : public Publicacion
{
public:
	virtual bool contienePalabra(std::string palabra) override;

private:
	std::string m_URL;
	std::string m_ContenidoExtraido;

};

#endif