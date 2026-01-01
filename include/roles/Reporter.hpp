#pragma once

#include "Pony.hpp"

class Reporter : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

