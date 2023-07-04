#pragma once

#include <string>
#include <memory>

namespace CommandSystem {
	//An abstract class that all commands must inherit
	class Command {
	public:
		virtual std::unique_ptr<std::string> onExecute() = 0;
	};
}