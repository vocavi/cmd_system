#include "DefaultDispatcher.h"

namespace CommandSystem {
    CommandDispatcher::CommandDispatcher(std::unique_ptr<CommandRegistry> registry) {
        this->registry = std::move(registry);
    }

    std::unique_ptr<std::string> CommandDispatcher::dispatch(const std::string& name) {
        auto cmd = this->registry->getCommand(name);
        if (cmd != nullptr) return cmd->onExecute();

        return std::make_unique<std::string>("Invalid Command");
    }

    void CommandDispatcher::registerCommand(const std::string& name, std::unique_ptr<ICommand> cmd){
        this->registry->registerCommand(name, std::move(cmd));
    }

}

