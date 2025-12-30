#include "Pony.hpp"

Pony::Pony(const std::string &name, const Role &role)
    : m_Name(name), m_Role(role) {}

std::string Pony::GetName() const
{
    return m_Name;
}

Role Pony::GetRole() const
{
    return m_Role;
}

