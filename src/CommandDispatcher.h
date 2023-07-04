#pragma once

#include <memory>
#include <string>

#include "CommandRegistry.h"

class CommandDispatcher
{
public:
	CommandDispatcher(std::unique_ptr<CommandRegistry> registry);
	std::unique_ptr<std::string> dispatch(const std::string& name);
private:
	std::unique_ptr<CommandRegistry> registry;
};

