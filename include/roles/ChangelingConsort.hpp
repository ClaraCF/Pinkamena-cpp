#pragma once

#include "Changeling.hpp"

class ChangelingConsort : public Changeling
{
public:
    ChangelingConsort(
        const std::string &name,
        Role role,
        bool magicImmune,
        bool nightImmune,
        std::shared_ptr<Changeling> queen
    );

    virtual ~ChangelingConsort() = default;

public:
    const RoleResult ExecuteRole(std::optional<const Pony *> pony) override;
};

