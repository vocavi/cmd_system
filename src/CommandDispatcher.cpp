#include "CommandDispatcher.h"

namespace CommandSystem {
    CommandSystem::CommandDispatcher::CommandDispatcher(std::unique_ptr<CommandRegistry> registry)
    {
        this->registry = std::move(registry);
    }

    std::unique_ptr<std::string> CommandSystem::CommandDispatcher::dispatch(const std::string& name)
    {
        auto cmd = this->registry->getCommand(name);
        if (cmd != nullptr) return cmd->onExecute();

        return std::make_unique<std::string>("Invalid Command");
    }

}

