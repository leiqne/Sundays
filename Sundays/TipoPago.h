#pragma once
#include <iostream>
#include <string>
#include "Crypt.h"

class TipoPago {
protected:
	std::string nombres, hash, tipo;
	float monto = 0;
public:
	TipoPago() = default;
	TipoPago(const std::string& type, std::string& fullname, const float& monto_) : nombres(fullname), monto(monto_), tipo(type) {};
	bool check(const std::string& hash_compare) {
		return hash_compare == hash;
	}

	std::string getTipo() const {
		return tipo;
	}
};

class Tarjeta : public TipoPago {
	std::string num, cvc, vencimiento;
public:
	Tarjeta() = default;
	Tarjeta(std::string fullname, const std::string num_, const std::string cvc_, const std::string vencimiento_, const float monto_) :
		num(num_), cvc(cvc_), vencimiento(vencimiento_), TipoPago("tarjeta", fullname, monto_) {
		hash = Cripto::SHA256(num + cvc + vencimiento).toString();
	};
};

class Efectivo : public TipoPago {
public:
	Efectivo() = default;
	Efectivo(std::string fullname, const float monto_) : TipoPago("efectivo", fullname, monto_) {
		hash = Cripto::SHA256(fullname + std::to_string(monto)).toString();
	}
};