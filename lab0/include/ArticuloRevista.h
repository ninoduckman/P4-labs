#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include "Utils.h"
#include "Publicacion.h"

class ArticuloRevista : public Publicacion
{
public:

	ArticuloRevista();
	ArticuloRevista(const std::string &m_Revista, const std::string &m_Extracto);
	~ArticuloRevista();

	std::string getRevista();
	std::string getExtracto();

	void setRevista(const std::string &m_Revista);
	void setExtracto(const std::string &m_Extracto);

	virtual bool contienePalabra(const std::string &palabra) override;

private:

	std::string m_Revista;
	std::string m_Extracto;
	
};

#endif