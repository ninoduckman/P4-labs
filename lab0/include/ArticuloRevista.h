#ifndef ARTICULOREVISTA_H
#define ARTICULOREVISTA_H

#include "Publicacion.h"
#include "Utils.h"

class ArticuloRevista : public Publicacion
{
  public:
  	// Constructores
	ArticuloRevista();
<<<<<<< Updated upstream
	ArticuloRevista(const std::string &m_Revista,
	                const std::string &m_Extracto);
=======
	ArticuloRevista(const std::string &doi, const std::string &titulo,
	                const DTFecha &fecha, const std::string &revista,
	                const std::string &extracto);

	// Destructor				
>>>>>>> Stashed changes
	~ArticuloRevista();

	// Operación polimórfica
	bool contienePalabra(const std::string &palabra);

	// getters
	void setRevista(const std::string &revista);
	void setExtracto(const std::string &extracto);

<<<<<<< Updated upstream
	virtual bool contienePalabra(const std::string &palabra) override;
=======
	// setters
	std::string getRevista() const;
	std::string getExtracto() const;
>>>>>>> Stashed changes

  private:
	std::string m_Revista;
	std::string m_Extracto;
};

#endif