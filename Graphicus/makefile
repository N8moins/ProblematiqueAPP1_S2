#
# Auteur: C.-A. Brunet
# Date: 13 juin 2024
# Modifie par : ...
# Date : ...
# Description: compilation de graphicus-01. Ce fichier fait partie de 
#	la distribution de Graphicus.
#

graphicus-01: graphicus-01.o tests.o canevas.o couche.o forme.o 
	g++ -o graphicus-01 graphicus-01.o tests.o canevas.o couche.o forme.o 

graphicus-01.o: graphicus-01.cpp canevas.h couche.h Formes/forme.h
	g++ -c graphicus-01.cpp

tests.o: tests.cpp tests.h canevas.h couche.h Formes/forme.h
	g++ -c tests.cpp

canevas.o: canevas.cpp canevas.h couche.h Formes/forme.h
	g++ -c canevas.cpp

couche.o: couche.cpp couche.h Formes/forme.h
	g++ -c couche.cpp

carre.o: Formes/carre.cpp Formes/carre.h Formes/rectangle.h Formes/forme.h
	g++ -c Formes/carre.cpp

rectangle.o: Formes/rectangle.cpp Formes/rectangle.h Formes/forme.h
	g++ -c Formes/rectangle.cpp

cercle.o: Formes/cercle.cpp Formes/cercle.h Formes/forme.h
	g++ -c Formes/cercle.cpp

forme.o: Formes/forme.cpp Formes/forme.h
	g++ -c Formes/forme.cpp

clean:
	rm  -f *.o
