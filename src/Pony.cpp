#include "Pony.hpp"

/* public:
public:
    std::string GetName() const;
    Role GetRole() const;

public:

public:
    bool IsMagicImmune() const;
    bool IsNightImmune() const; */

Pony::Pony(
    const std::string &name,
    Role role,
    bool magicImmune,
    bool nightImmune
) : m_Name(name), m_Role(role), m_MagicImmune(magicImmune), m_NightImmune(nightImmune) {}

std::string Pony::GetName() const
{
    return m_Name;
}

Role Pony::GetRole() const
{
    return m_Role;
}

void Pony::SetNightImmune(bool nightImmune)
{
    m_NightImmune = nightImmune;
}

bool Pony::IsMagicImmune() const
{
    return m_MagicImmune;
}

bool Pony::IsNightImmune() const
{
    return m_NightImmune;
}

