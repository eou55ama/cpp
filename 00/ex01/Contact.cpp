#include "Contact.hpp"

void Contact:: set_firstname(std::string str){
    firstname = str;
}
void Contact:: set_lastname(std::string str){
    lastname = str;
}
void Contact:: set_nickname(std::string str){
    nickname = str;
}
void Contact:: set_phonenumber(std::string str){
    phonenumber = str;
}
void Contact:: set_darkestsecret(std::string str){
    darkestsecret = str;
}
void Contact:: set_ind(int x){
    ind = x;
}
int Contact:: get_ind(){
    return(ind);
}
std::string Contact:: get_firstname(){
    return(firstname);
}
std::string Contact:: get_lastname(){
    return(lastname);
}
std::string Contact:: get_nickname(){
    return(nickname);
}
