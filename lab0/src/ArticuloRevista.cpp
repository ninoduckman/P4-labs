#include "../include/ArticuloRevista.h"

ArticuloRevista::ArticuloRevista() : m_Revista(""), m_Extracto("") {}

ArticuloRevista::ArticuloRevista(const std::string &m_Revista, const std::string &m_Extracto) : m_Revista(m_Revista), m_Extracto(m_Extracto) {}

ArticuloRevista::~ArticuloRevista() {}

bool contienePalabra(std::string palabra) {return m_Extracto.find(palabra) != std::npos;}

std::string getRevista() const{return m_Revista;}

std::string getExtracto() const{return m_Extracto;}

void setRevista(const std::string &m_Revista) {m_Revista = m_Revista;}

void setExtracto(const std::string &m_Extracto) {m_Extracto = m_Extracto;}