#pragma once
#include "profile.hpp"
#include <string>
#include <string_view>
#include <vector>

namespace social_network
{
class Post;

class User
{
private:    
    std::string m_username{};
    Profile m_profile{};
    std::vector<Post*> m_post{};

public:
    User() = default;

    user(std::string_view username);
    ~User();

    void ЗаполнитьПрофиль(std::string_view bio, int registrationYear);
    void ДобавитьЗапись(Post* post);
    void ПоказатьЛенту() const;

    [[nodiscard]] std::string_view GetUsername() const
    {
        return m_username;
    }
};
}