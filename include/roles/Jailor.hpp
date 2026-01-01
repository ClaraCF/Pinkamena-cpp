#pragma once

#include "Pony.hpp"

class Jailor : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

