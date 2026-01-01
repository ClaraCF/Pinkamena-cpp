#include "roles/ChangelingConsort.hpp"

#include <iostream>

ChangelingConsort::ChangelingConsort(
    const std::string &name,
    Role role,
    bool magicImmune,
    bool nightImmune,
    std::shared_ptr<Changeling> queen
) : Changeling::Changeling(name, role, magicImmune, nightImmune, std::move(queen)) {}

const RoleResult ChangelingConsort::ExecuteRole(std::optional<const Pony *> targetPony)
{
    const Pony *pony = targetPony.value();

    RoleExecutionResult result = RoleExecutionResult::SUCCESS;
    std::string report = "I fucked you're mother...";

    std::cout << "[" << this->GetName() << "] I fucked " <<  pony->GetName() << "'s mom." << std::endl;

    return RoleResult(result, report);
}

