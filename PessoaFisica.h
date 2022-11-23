#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include "Pessoa.h"

enum EstadoCivil{
	SOLTEIRO = 1,
	CASADO = 2,
	DIVORCIADO = 3,
	VIUVO = 4
};

class PessoaFisica : public Pessoa
{	
	private:
		EstadoCivil estadoCivil;
		string getEstado();
		string dataNascimento();
		string cpf();
		
	public:
		PessoaFisica();
		~PessoaFisica();
		string getDataNascimento();
		string getCpf();
		void setDataNascimento();
		void setCpf();
		
				
	protected:
};

#endif
