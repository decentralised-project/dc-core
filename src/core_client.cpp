#include "core_client.hpp"

namespace dc
{
	namespace core
	{
		core_client::core_client(signal_handler eventHandler) : eventHandler_(eventHandler)
		{	
			eventHandler_(L"core_client", GetVersion());
		}

		core_client::~core_client()
		{
		}

		std::wstring core_client::GetVersion()
		{
			return L"v1.0";
		}
	}
}