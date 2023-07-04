#pragma once

#include "ICommandManager.h"
#include "CommandDispatcher.h"

namespace CommandSystem {

	class DefaultCommandManager : public ICommandManager {

	public:
		DefaultCommandManager();

		std::unique_ptr<std::string> runCommand(const std::string& name) override;

	private:
		std::unique_ptr<CommandDispatcher> dispatcher;
	};
}

