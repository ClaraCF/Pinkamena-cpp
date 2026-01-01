#include <iostream>
#include <memory>

#include "Pony.hpp"
#include "Changeling.hpp"

#include "roles/ChangelingConsort.hpp"
#include "roles/ChangelingQueen.hpp"

#include "roles/Bodyguard.hpp"

int main()
{
    Pony *bodyguard = new Bodyguard("Peppa Pecas", Role::BODYGUARD, false, false);
    std::shared_ptr<Changeling> queen(new ChangelingQueen("Reina Papiada", Role::CHANGELING_QUEEN, true, true));
    Pony *consort = new ChangelingConsort("Pancha Villa", Role::CHANELING_CONSORT, false, false, queen);

    const RoleResult result = bodyguard->ExecuteRole(bodyguard)
    queen->ExecuteRole(bodyguard);
    consort->ExecuteRole(bodyguard);

    std::cout << result.GetResult() << " " << result.GetReport() << std::endl;
}

