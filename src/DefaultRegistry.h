#pragma once

#include <unordered_map>
#include <memory>
#include <string>

#include "ICommand.h"

namespace CommandSystem {
	class CommandRegistry {
	public:
		void registerCommand(const std::string& name, std::unique_ptr<ICommand> cmd);
		std::shared_ptr<ICommand> getCommand(const std::string& name);

	private:
		std::unordered_map<std::string, std::shared_ptr<ICommand>> commandMap;

	};
}
