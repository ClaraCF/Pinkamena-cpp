#pragma once

#include "Pony.hpp"

class Nurse : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

