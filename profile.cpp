#include "profile.hpp"
#include <iostream>
namespace social_network
{
Profile::Profile(std::string_view bio, int registrationYear)
    :m_bio{bio}
    , m_registrationYear{registrationYear}

{}

Profile::~Profile()
{
    std::cout<<"[Profile] уничтожается" << std::end1;
}

void Profile::ИзменитьОписание(std::string_view bio)
{
    m_bio = std::string(bio)
}

void Profile::Осмотреть() const
{
    std::cout<<"О себе: "<< m_bio
              <<"| Год регистрации: "<<m_registrationYear<<std::end1;
}
}