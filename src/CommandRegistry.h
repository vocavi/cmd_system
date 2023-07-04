#pragma once

#include <unordered_map>
#include <memory>
#include <string>

#include "Command.h"

class CommandRegistry
{
public:
	void registerCommand(const std::string& name, std::shared_ptr<Command> cmd);
	std::shared_ptr<Command> getCommand(const std::string& name);

private:
	std::unordered_map<std::string, std::shared_ptr<Command>> commandMap;

};

