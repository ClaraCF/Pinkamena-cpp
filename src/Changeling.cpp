#include "Changeling.hpp"

Changeling::Changeling(
        const std::string &name,
        Role role,
        bool magicImmune,
        bool nightImmune,
        std::shared_ptr<Changeling> queen
) : Pony::Pony(name, role, magicImmune, nightImmune), m_Queen(std::move(queen)) {}

