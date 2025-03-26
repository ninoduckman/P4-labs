CXX = g++
CXXFLAGS = -Wall -std=c++98 -Iinclude

SRCS = src/ArticuloRevista.cpp src/DTFecha.cpp src/DTRefer.cpp
SRCS := $(SRCS) src/Investigador.cpp src/Libro.cpp src/PaginaWeb.cpp src/Publicacion.cpp
SRCS := $(SRCS) ejemplo_main_2025.cpp 
OBJS = $(SRCS:.cpp=.o)
EXEC = ejemplo

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

rebuild: clean all