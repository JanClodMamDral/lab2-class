#pragma once

#include <string>
#include <string_view>

namespace social_network
{
class Profile
{
    std::string m_bio{};
    int m_registrationYear{0};

public:
    Profile()=default;
    Profile(std::string_view bio, int registrationYear);    
    ~Profile();

    void ИзменитьОписание(std::string_view bio); 
    void Осмотреть() const;

    [[nodiscard]] std::string_view GetBio() const
    {
        return m_bio;
    }

    [[nodiscard]] auto GetRegistrationYear() const
    {
        return m_registrationYear;
    }
};
}