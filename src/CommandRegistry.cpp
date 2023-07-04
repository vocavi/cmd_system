#include "CommandRegistry.h"

void CommandRegistry::registerCommand(const std::string& name, std::shared_ptr<Command> cmd)
{
	auto commandIterator = this->commandMap.find(name);

	if (commandIterator == this->commandMap.end())this->commandMap[name] = cmd;

}

std::shared_ptr<Command> CommandRegistry::getCommand(const std::string& name)
{
	auto commandIterator = this->commandMap.find(name);

	if (commandIterator != this->commandMap.end()) return commandIterator->second;

	return nullptr;
}
