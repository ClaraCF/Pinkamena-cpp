#include "RoleResult.hpp"

RoleResult::RoleResult(const RoleExecutionResult &roleResult, const std::string &report)
    : m_RoleExecutionResult(roleResult), m_Report(report) {}

RoleExecutionResult RoleResult::GetResult() const
{
    return m_RoleExecutionResult;
}

std::string RoleResult::GetReport() const
{
    return m_Report;
}

