#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include "Utils.h"
#include "Publicacion.h"

class PaginaWeb : public Publicacion
{
public:
	PaginaWeb();
	PaginaWeb(const std::string &m_URL, const std::string &m_ContenidoExtraido);
	~PaginaWeb();
	virtual bool contienePalabra(std::string palabra) override;
	std::string getURL();
	std::string getContenidoExtraido();
private:
	std::string m_URL;
	std::string m_ContenidoExtraido;

};

#endif