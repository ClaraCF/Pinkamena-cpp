#pragma once

#include "Pony.hpp"

class Bodyguard : public Pony
{
public:
    Bodyguard(
        const std::string &name,
        Role role,
        bool magicImmune,
        bool nightImmune
    );

    virtual ~Bodyguard() = default;

public:
    const RoleResult ExecuteRole(std::optional<const Pony *> pony) override;
};

