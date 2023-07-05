#pragma once

#include "ICommandManager.h"
#include "DefaultDispatcher.h"

namespace CommandSystem {

	class DefaultCommandManager : public ICommandManager {

	public:
		DefaultCommandManager();

		std::unique_ptr<std::string> runCommand(const std::string& name) override;
		void registerCommand(const std::string& name, std::unique_ptr<ICommand> cmd);

	private:
		std::unique_ptr<CommandDispatcher> dispatcher;
	};
}

