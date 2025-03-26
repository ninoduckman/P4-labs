#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include "Publicacion.h"
#include "Utils.h"

class PaginaWeb : public Publicacion
{
  public:
  	// Constructores
	PaginaWeb();
<<<<<<< Updated upstream
	PaginaWeb(const std::string &m_URL, const std::string &m_ContenidoExtraido);
	~PaginaWeb();
	virtual bool contienePalabra(const std::string &palabra) override;
=======
	PaginaWeb(const std::string &doi, const std::string &titulo,
	          const DTFecha &fecha, const std::string &url,
	          const std::string &contenidoExtraido);
>>>>>>> Stashed changes

	// Destructor		  
	~PaginaWeb();

	// Operación polimórfica
	bool contienePalabra(const std::string &palabra);

	// getters
	std::string getURL() const;
	std::string getContenidoExtraido() const;

	// setters
	void setURL(const std::string &url);
	void setContenidoExtraido(const std::string &contenido_extraido);

  private:
	std::string m_URL;
	std::string m_ContenidoExtraido;
};

#endif