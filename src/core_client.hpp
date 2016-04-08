#ifndef __DC_CORE_CLIENT_H_INCLUDED__
#define __DC_CORE_CLIENT_H_INCLUDED__

#include <future>

namespace dc
{
	namespace core
	{
		class core_client
		{
		public:
			typedef std::function<void(const std::wstring, const std::wstring)> signal_handler;

			core_client(signal_handler eventHandler);
			~core_client();

			std::wstring GetVersion();

		private:
			signal_handler eventHandler_;
		};
	}
}

#endif