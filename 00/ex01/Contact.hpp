#ifndef CONTACT_H
#define  CONTACT_H

#include<iostream>
#include <iomanip>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phonenumber;
        std::string darkestsecret;
        int ind;
    public:
        void set_firstname(std::string str);
        void set_lastname(std::string str);
        void set_nickname(std::string str);
        void set_phonenumber(std::string str);
        void set_darkestsecret(std::string str);
        void set_ind(int x);
        int  get_ind();
        std::string get_firstname();
        std::string get_lastname();
        std::string get_nickname();
        std::string get_phonenumber();
        std::string get_darkestsecret();
};

#endif