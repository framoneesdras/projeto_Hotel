// Dados.h
#ifndef DADOS_H
#define DADOS_H

#include <vector>
#include <string>
#include <fstream>
#include "Quarto.h" //Heranca
#include "Hospede.h" //Heranca
#include "Reserva.h" //Heranca
#include "Pagamento.h" //Heranca
#include "Avaliacao.h" //Heranca

class Dados {
private:
    std::string fileName;
public:
    Dados(const std::string& fileName);
    ~Dados();
    
    std::vector<Quarto> carregarQuartos();
    std::vector<Hospede> carregarHospedes();
    std::vector<Reserva> carregarReservas();
    std::vector<Pagamento> carregarPagamentos();
    std::vector<Avaliacoes> carregarAvaliacoes();

    void salvarQuartos(const std::vector<Quarto>& quartos);
    void salvarHospedes(const std::vector<Hospede>& hospedes);
    void salvarReservas(const std::vector<Reserva>& reservas);
    void salvarPagamentos(const std::vector<Pagamento>& pagamentos);
    void salvarAvaliacoes(const std::vector<Avaliacoes>& avaliacoes);
};

#endif // DADOS_H
