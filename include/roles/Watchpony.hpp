#pragma once

#include "Pony.hpp"

class Watchpony : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

