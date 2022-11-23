#include "Pessoa.h"

#include "PessoaFisica.h"

Pessoa::Pessoa()
{
}

Pessoa::Pessoa(string nome, string email, string endereco)
{
	setNome(nome);
	setEndereco(endereco);
	setEmail(email);
}

Pessoa::~Pessoa()
{
	
}

string getNome::Pessoa()
{
	return nome;
}

string getEmail::Pessoa()
{
	return email;
}

string getEndereco::Pessoa()
{
	return endereco;
}

void setNome::Pessoa(nome)
{
	this->nome = nome;
}

void setEmail::Pessoa(email)
{
	this->email = email;
}

void setEndereco::Pessoa(endereco)
{
	this->endereco = endereco;
}



