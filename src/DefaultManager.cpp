#include "DefaultManager.h"

namespace CommandSystem {

	DefaultCommandManager::DefaultCommandManager()
	{
		this->dispatcher = std::make_unique<CommandDispatcher>(std::make_unique<CommandRegistry>());
	}

	std::unique_ptr<std::string> DefaultCommandManager::runCommand(const std::string& name)
	{
		return this->dispatcher->dispatch(name);
	}

	void DefaultCommandManager::registerCommand(const std::string& name, std::unique_ptr<ICommand> cmd)
	{
		this->dispatcher->registerCommand(name, std::move(cmd));
	}

}

