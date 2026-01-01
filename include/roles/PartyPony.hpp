#pragma once

#include "Pony.hpp"

class PartyPony : public Pony
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

