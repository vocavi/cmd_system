#pragma once

#include <memory>
#include <string>

#include "DefaultRegistry.h"

namespace CommandSystem {
	class CommandDispatcher {
	public:
		CommandDispatcher(std::unique_ptr<CommandRegistry> registry);
		std::unique_ptr<std::string> dispatch(const std::string& name);
		void registerCommand(const std::string& name, std::unique_ptr<ICommand> cmd);
	private:
		std::unique_ptr<CommandRegistry> registry;
	};
}


