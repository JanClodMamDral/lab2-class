#include "user.hpp"
#include "post.hpp"
#include <iostream>

namespace social_network
{
User::User(std::string_view username)
{
    if (username.empty())
    {
        std::cout<<"Ошибка: имя пользователя не может быть пустым. Присвоено имя по умолчанию"
        m_username = "uknown";
    }
    else
    {
        m_username = std::string(username);
    }
}    
User::~User()
{
    std::cout<<"[User] уничтожается: "<<m_username<<std::endl;
}

Void User::ЗаполнитьПрофиль(std::string_view bio, int registrationYear)
{
    m_profile.ИзменитьОписание(bio);
}

void User::ДобавитьЗапись(Post* post)
{
    m_post.push_back(post);
}

void User::ПоказатьЛенту() const
{
    std<<cout<<"---Лента пользователя "<<m_username<<"---"<<std::endl;
    m_profile.Осмотреть();
    for(const Post* post : m_posts)
    {
        post->Осмотреть();
    }
}
}