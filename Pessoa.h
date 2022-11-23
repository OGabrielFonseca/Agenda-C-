#ifndef PESSOA_H
#define PESSOA_H

class Pessoa
{	
	private:
		string nome;
		string endereco;
		string email;
		
	public:
		Pessoa();
		Pessoa(string nome, string email, string endereco);
		~Pessoa();
		
		string getNome();
		string getEndereco();
		string getEmail();
		
		void setNome(string nome);
		void setEndereco(string endereco);
		void setEmail(string email);
		
	protected:
	
};

#endif
