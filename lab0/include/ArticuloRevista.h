#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include "Publicacion.h"
#include "Utils.h"

class ArticuloRevista : public Publicacion
{
  public:
  	// Constructores
	ArticuloRevista();
	ArticuloRevista(const std::string &doi, const std::string &titulo,
	                const DTFecha &fecha, const std::string &revista,
	                const std::string &extracto);

	// Destructor				
	~ArticuloRevista();

	// Operación polimórfica
	bool contienePalabra(const std::string &palabra);

	// getters
	void setRevista(const std::string &revista);
	void setExtracto(const std::string &extracto);

	// setters
	std::string getRevista() const;
	std::string getExtracto() const;

  private:
	std::string m_Revista;
	std::string m_Extracto;
};

#endif