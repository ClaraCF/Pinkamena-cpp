#pragma once

#include "Changeling.hpp"

class ChangelingQueen : public Changeling
{
public:
    ChangelingQueen(
        const std::string &name,
        Role role,
        bool magicImmune,
        bool nightImmune
    );

public:
    const RoleResult ExecuteRole(std::optional<const Pony *> pony) override;
};

