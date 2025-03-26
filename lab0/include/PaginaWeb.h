#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include "Publicacion.h"
#include "Utils.h"

class PaginaWeb : public Publicacion
{
  public:
	PaginaWeb();
	PaginaWeb(const std::string &doi, const std::string &titulo, const DTFecha &fecha,
	          const std::string &url, const std::string &contenidoExtraido);
	~PaginaWeb();
	virtual bool contienePalabra(const std::string &palabra) override;

	std::string getURL() const;
	std::string getContenidoExtraido() const;

	void setURL(const std::string &url);
	void setContenidoExtraido(const std::string &contenido_extraido);

  private:
	std::string m_URL;
	std::string m_ContenidoExtraido;
};

#endif