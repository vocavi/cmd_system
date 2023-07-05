#pragma once

#include <memory>
#include <string>

namespace CommandSystem {

	class ICommandManager {
	public:
		virtual std::unique_ptr<std::string> runCommand(const std::string& name) = 0;
	};

}