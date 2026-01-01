#include "roles/Bodyguard.hpp"
#include "RoleResult.hpp"

#include <iostream>


Bodyguard::Bodyguard (
        const std::string &name,
        Role role,
        bool magicImmune,
        bool nightImmune
) : Pony::Pony(name, role, magicImmune, nightImmune) {}


const RoleResult Bodyguard::ExecuteRole(std::optional<const Pony *> targetPony)
{
    const Pony *pony = targetPony.value();

    RoleExecutionResult result = RoleExecutionResult::SUCCESS;
    std::string report = "Good afternoon professor balls big fat balls in my mouth big man balls mm balls and nuts";

    std::cout << "[" << this->GetName() << "] Don't worry " << pony->GetName() << ", I'll save you!!1!" << std::endl;

    return RoleResult(result, report);
}

