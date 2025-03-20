#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include "Publicacion.h"
#include "Utils.h"

class ArticuloRevista : public Publicacion
{
  public:
	ArticuloRevista();
	ArticuloRevista(const std::string &m_Revista,
	                const std::string &m_Extracto);
	~ArticuloRevista();

	std::string getRevista() const;
	std::string getExtracto() const;

	void setRevista(const std::string &revista);
	void setExtracto(const std::string &extracto);

	virtual bool contienePalabra(const std::string &palabra) override;

  private:
	std::string m_Revista;
	std::string m_Extracto;
};

#endif