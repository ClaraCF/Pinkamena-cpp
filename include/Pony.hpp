#pragma once

#include <string>
#include "Role.hpp"

class Pony
{
private:
    const std::string m_Name;
    const Role m_Role;

public:
    Pony(const std::string &name, const Role &role);

public:
    std::string GetName() const;
    Role GetRole() const;

public:
    
};

