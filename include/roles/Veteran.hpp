#pragma once

#include "Pony.hpp"

class Veteran : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

