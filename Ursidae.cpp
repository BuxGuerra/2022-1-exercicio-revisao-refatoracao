#include "Ursidae.hpp"

void Ursidae::print() {
            std::cout << "\n[Animal]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << idade << std::endl
            << "  Família: Ursidae" << std::endl
            << "  Especie: " << especie << std::endl;
        }

        double Ursidae::calcularPeixesConsumidos(int porcaoPeixes){
            double x;
            return PEIXESPORPORCAO*porcaoPeixes;
        }