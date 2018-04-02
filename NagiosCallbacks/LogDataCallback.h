#ifndef LOG_DATA_CALLBACK_H
#define LOG_DATA_CALLBACK_H

#include "nebmodule.h"

#include "NebmoduleCallback.h"


namespace statusengine {
	class LogDataCallback : public NebmoduleCallback<nebstruct_log_data> {
	public:
		LogDataCallback(Statusengine *se);

		virtual void Callback(int event_type, nebstruct_log_data *data);
	};
}

#endif // !LOG_DATA_CALLBACK_H