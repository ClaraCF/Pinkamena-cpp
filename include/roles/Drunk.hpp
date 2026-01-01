#pragma once

#include "Pony.hpp"

class Drunk : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

