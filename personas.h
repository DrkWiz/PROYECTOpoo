//
// Created by pc on 27/04/2023.
//

#ifndef PROYECTOPOO_PERSONAS_H
#define PROYECTOPOO_PERSONAS_H
#include <string>

class personas {
private:
    int Dni;
    std::string Name;
    std::string Apellido;
    std::string Mail;
public:
    personas(int _Dni,std::string _Name,std::string _Apellido,std::string _Mail);

    void setDni(int _Dni);
    void setName(std::string _Name);
    void setApellido(std::string _Apellido);
    void setMail(std::string _Mail);

    int getDni();
    std::string getName();
    std::string getApellido();
    std::string getMail();

};


#endif //PROYECTOPOO_PERSONAS_H
