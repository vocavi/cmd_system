#include "DefaultCommandManager.h"

DefaultCommandManager::DefaultCommandManager()
{
	this->dispatcher = std::make_unique<CommandDispatcher>(std::make_unique<CommandRegistry>());
}

std::unique_ptr<std::string> DefaultCommandManager::runCommand(const std::string& name)
{
	return this->dispatcher->dispatch(name);
}
