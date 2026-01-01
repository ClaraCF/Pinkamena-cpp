#pragma once

#include "Changeling.hpp"

class ChangelingDrone : public Changeling
{
public:
    const RoleResult ExecuteRole(std::optional<const Pony &> pony) override;
};

