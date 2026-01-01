#pragma once

#include "Pony.hpp"

class Gumshoe : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

