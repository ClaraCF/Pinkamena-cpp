#pragma once

#include <string>

enum RoleExecutionResult
{
    SUCCESS,
    ROLE_BLOCKED,
};

class RoleResult
{
private:
    RoleExecutionResult m_RoleExecutionResult;
    std::string m_Report;
};

