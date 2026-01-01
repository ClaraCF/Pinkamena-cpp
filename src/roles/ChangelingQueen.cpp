#include "roles/ChangelingQueen.hpp"

#include <iostream>
#include <memory>

ChangelingQueen::ChangelingQueen(
    const std::string &name,
    Role role,
    bool magicImmune,
    bool nightImmune
) : Changeling::Changeling(name, role, magicImmune, nightImmune, std::shared_ptr<Changeling>(this)) {}

const RoleResult ChangelingQueen::ExecuteRole(std::optional<const Pony *> targetPony)
{
    const Pony *pony = targetPony.value();

    RoleExecutionResult result = RoleExecutionResult::SUCCESS;
    std::string report = "I didn't do shit.";

    std::cout << "[" << this->GetName() << "] I will literally do nothing" << std::endl;

    return RoleResult(result, report);
}

