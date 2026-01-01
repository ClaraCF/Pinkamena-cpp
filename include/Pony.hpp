#pragma once

#include <string>
#include <optional>

#include "Role.hpp"
#include "RoleResult.hpp"
#include "SuicideReason.hpp"

/* Immunity
 * Magic Immune grants immunity to the Spellcaster's Killing Hex.
 * Night Immune grants immunity to being killed at night, either by Pinkarella or the Changelings.
   Can still be hung in the morning.
*/

class Pony
{
private:
    const std::string m_Name;
    const Role m_Role;
    const bool m_MagicImmune;
    bool m_NightImmune;
    bool m_Alive;

public:
    Pony(
        const std::string &name,
        Role role,
        bool magicImmune,
        bool nightImmune,
        bool alive
    );

    virtual ~Pony() = default;

public:
    std::string GetName() const;
    Role GetRole() const;

public:
    void SetNightImmune(bool nightImmune);

public:
    bool IsMagicImmune() const;
    bool IsNightImmune() const;
    bool IsAlive() const;

public:
    virtual const RoleResult ExecuteRole(std::optional<const Pony *> pony) = 0;
    virtual void Suicide(SuicideReason reason) = 0;
    virtual void Murdered(const Pony *pony) = 0;
    virtual void Hang()
};

