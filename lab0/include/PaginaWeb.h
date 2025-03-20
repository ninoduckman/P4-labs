#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include "Publicacion.h"
#include "Utils.h"

class PaginaWeb : public Publicacion
{
  public:
	PaginaWeb();
	PaginaWeb(const std::string &m_URL, const std::string &m_ContenidoExtraido);
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