#pragma once

#include "Pony.hpp"

class Spellcaster : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

