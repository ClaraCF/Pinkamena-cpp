#pragma once

#include "Changeling.hpp"

class ChangelingForger: public Changeling
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

