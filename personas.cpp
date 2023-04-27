//
// Created by pc on 27/04/2023.
//

#include "personas.h"

personas::personas(int _Dni, std::string _Name, std::string _Apellido, std::string _Mail) {
    Dni=_Dni;
    Name = _Name;
    Apellido = _Apellido;
    Mail = _Mail;
}

void personas::setDni(int _Dni) {
Dni = _Dni;
}
void personas::setName(std::string _Name) {
Name = _Name;
}
void personas::setApellido(std::string _Apellido) {
Apellido = _Apellido;
}
void personas::setMail(std::string _Mail) {
Mail=_Mail;
}

int personas::getDni() {
    return Dni;
}
std::string personas::getName() {
    return Name;
}
std::string personas::getApellido() {
    return Apellido;
}
std::string personas::getMail() {
    return Mail;
}


