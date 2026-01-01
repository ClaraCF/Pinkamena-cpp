#pragma once

#include "Pony.hpp"

class Mule : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

