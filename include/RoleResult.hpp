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
    const RoleExecutionResult m_RoleExecutionResult;
    const std::string m_Report;

public:
    RoleResult(const RoleExecutionResult &roleResult, const std::string &report);

public:
    RoleExecutionResult GetResult() const;
    std::string GetReport() const;
};

