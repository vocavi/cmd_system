#include "CommandRegistry.h"

namespace CommandSystem {
	void CommandRegistry::registerCommand(const std::string& name, std::shared_ptr<ICommand> cmd) {
		auto commandIterator = this->commandMap.find(name);

		if (commandIterator == this->commandMap.end())this->commandMap[name] = cmd;

	}

	std::shared_ptr<ICommand> CommandRegistry::getCommand(const std::string& name) {
		auto commandIterators = this->commandMap.find(name);

		if (commandIterators != this->commandMap.end()) return commandIterators->second;

		return nullptr;
	}
}


