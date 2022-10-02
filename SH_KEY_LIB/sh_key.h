#ifndef _SH_KEY_H_
#define _SH_KEY_H_

#include <cstdint>

namespace keys {
	typedef struct k_state {
		bool pressed;
		bool released;
		bool held;
	}k_state;

	int32_t get_x();
	int32_t get_y();

	k_state get_key(uint32_t id);

#if (defined( WIN32 ) || defined( WIN64 ) || defined( WINDOWS ))

#include <Windows.h>

	void update(HWND hwnd);
	void set_cursor(int32_t x, int32_t y);

#else
#endif
};
#endif //_SH_KEY_H_