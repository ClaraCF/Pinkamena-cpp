#pragma once

#include <memory>

#include "Pony.hpp"


class Changeling : public Pony
{
private:
    const std::shared_ptr<Changeling> m_Queen;

public:
    Changeling(
        const std::string &name,
        Role role,
        bool magicImmune,
        bool nightImmune,
        std::shared_ptr<Changeling> queen
    );

    virtual ~Changeling() = default;
};

