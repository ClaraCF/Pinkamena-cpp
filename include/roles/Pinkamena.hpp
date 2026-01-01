#pragma once

#include "Pony.hpp"

class Pinkamena : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

